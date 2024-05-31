from django.shortcuts import render, redirect
from . import forms
# Create your views here.
def add_post(req):
    if req.method == 'POST':
        post_form = forms.PostForm(req.POST)
        if post_form.is_valid():
            post_form.save()
            return redirect('add_post')
    else:
        post_form = forms.PostForm()
    return render(req, 'add_post.html', {'form' : post_form})