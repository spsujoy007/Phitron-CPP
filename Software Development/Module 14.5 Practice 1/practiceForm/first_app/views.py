from django.shortcuts import render
from .form import DjangoForm

# Create your views here.
def django_form(req):
    return render(req, 'index.html', {'form': DjangoForm})