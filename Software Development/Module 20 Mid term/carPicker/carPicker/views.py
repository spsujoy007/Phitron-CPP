from django.shortcuts import render
from cars.models import Car
def home(req):
    cars = Car.objects.all()
    return render(req, 'home.html', {'cars': cars})