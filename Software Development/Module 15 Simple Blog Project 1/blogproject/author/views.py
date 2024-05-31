from django.shortcuts import render, redirect
from . import form

# Create your views here.
def add_author(req):
    if req.method == 'POST':
        print(req)
        author_form = form.AuthorForm(req.POST)
        if author_form.is_valid():
            author_form.save()
            return redirect('add_author')
    else:
        author_form = form.AuthorForm()
    return render(req, 'add_author.html', {'form' : author_form})