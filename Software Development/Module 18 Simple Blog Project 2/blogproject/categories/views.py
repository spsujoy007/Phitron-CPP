from django.shortcuts import render, redirect
from . import forms

# Create your views here.
def add_category(req):
    if req.method == 'POST':
        categoryForm = forms.CategoryForm(req.POST)
        if categoryForm.is_valid():
            categoryForm.save()
            return redirect('add_category')
    else:
        categoryForm = forms.CategoryForm()
    return render(req, 'add_category.html', {'form' : categoryForm})