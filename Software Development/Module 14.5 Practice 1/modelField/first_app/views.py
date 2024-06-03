from django.shortcuts import render
from .  import models

# Create your views here.
def home(req):
    data = models.ModelForm.objects.all()
    for i in data:
        print(i.profile_pic)
    return render(req, 'home.html', {'data': data})