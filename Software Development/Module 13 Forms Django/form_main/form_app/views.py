from django.shortcuts import render
from . forms import PasswordMatchingSystem

# Create your views here.
def home(request):
    return  render(request, 'home.html')

def formpage(req):
    return render(req, 'form.html')

def passwordForm(req):
    return render(req, 'passwordmatching.html', {'matching' : PasswordMatchingSystem})