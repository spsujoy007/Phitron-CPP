from django.shortcuts import render


# Create your views here.
def home(request):
    return  render(request, 'home.html')

def formpage(req):
    return render(req, 'form.html')
