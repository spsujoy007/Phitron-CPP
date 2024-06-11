from django.shortcuts import render, redirect
from . import forms
from . import models
from django.contrib.auth.decorators import login_required

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

@login_required
def delete_post(req, id):
    post = models.Post.objects.get(pk=id)
    post.delete()
    print(post)
    return redirect('home')