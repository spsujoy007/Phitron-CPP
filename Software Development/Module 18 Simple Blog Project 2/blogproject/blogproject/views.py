from django.shortcuts import render
from posts.models import Post
from categories.models import Category
def home(req, category_slug = None):
    if category_slug is not None:
        findcategory = Category.objects.get(slug=category_slug)
        posts = Post.objects.filter(category = findcategory)
    else:
        posts = Post.objects.all()
    category = Category.objects.all()
    return render(req, 'home.html', {'posts' : posts, 'categories': category})