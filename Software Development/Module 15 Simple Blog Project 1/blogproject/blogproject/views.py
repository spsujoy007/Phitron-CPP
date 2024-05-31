from django.shortcuts import render
from posts import models
def home(req):
    posts = models.Post.objects.all()
    return render(req, 'home.html', {'posts' : posts})