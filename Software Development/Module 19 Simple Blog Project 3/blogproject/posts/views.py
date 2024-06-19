from django.shortcuts import render, redirect
from django.urls import reverse_lazy
from . import forms
from . import models
from django.contrib.auth.decorators import login_required
from django.views.generic import CreateView, UpdateView, DeleteView, DetailView
from django.utils.decorators import method_decorator
# Create your views here.

@login_required
def add_post(req):
    if req.method == 'POST':
        post_form = forms.PostForm(req.POST)
        if post_form.is_valid():
            # post_form.cleaned_data['author'] = req.user
            post_form.instance.author = req.user
            post_form.save()
            return redirect('add_post')
    else:
        post_form = forms.PostForm()
    return render(req, 'add_post.html', {'form' : post_form})

#class based view 
@method_decorator(login_required, name='dispatch')
class AddPostCreateView(CreateView):
    model = models.Post
    form_class = forms.PostForm
    template_name = 'add_post.html'
    success_url = reverse_lazy('add_post')
    def form_valid(self, form):
        form.instance.author = self.req.user
        return super().form_valid(form)


@login_required
def edit_post(req, id):
    post = models.Post.objects.get(pk=id)
    post_form = forms.PostForm(instance=post) 
    # with instance i can update preivous values //////////////////////////////

    print(post.title)
    if req.method == 'POST':
        post_form = forms.PostForm(req.POST, instance=post) # // instance
        if post_form.is_valid():
            post_form.instance.author = req.user
            post_form.save()
            return redirect('home')
    return render(req, 'add_post.html', {'form' : post_form})

@method_decorator(login_required, name='dispatch')
class EditPostView(UpdateView):
    model = models.Post
    form_class = forms.PostForm
    template_name = 'add_post.html'
    success_url = reverse_lazy('profile')
    pk_url_kwarg = 'id'

@method_decorator(login_required, name='dispatch')
class DeletePostView(DeleteView):
    model = models.Post
    template_name = 'delete.html'
    success_url = reverse_lazy('home')
    pk_url_kwarg = 'id'


@login_required
def delete_post(req, id):
    post = models.Post.objects.get(pk=id)
    post.delete()
    print(post)
    return redirect('home')

class DetailPostView(DetailView): 
    model = models.Post
    pk_url_kwarg = 'id'
    template_name = 'postdetails.html'

    def post(self, request, *args, **kwargs):
        comment_form = forms.CommentForm(data=self.request.POST)
        post = self.get_object()
        if comment_form.is_valid():
            new_comment = comment_form.save(commit=False)
            new_comment.post = post
            new_comment.save()
        return self.get(request, *args, **kwargs)

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        post = self.object
        comments = post.comments.all()
        comment_form = forms.CommentForm()

        context['comments'] = comments
        context['comment_form'] = comment_form

        return context
