from django.shortcuts import render, get_object_or_404, redirect
from cars.models import Car
from django.views.generic import CreateView, UpdateView, DeleteView, DetailView
from cars.models import Car
from brands.models import Brand

from orders.models import Orderhistory

def home(req):
    cars = Car.objects.all()
    brands = Brand.objects.all()
    return render(req, 'home.html', {'cars': cars, 'brands': brands})


def filterCar(req, name):
    findbrand = Brand.objects.get(name=name)
    cars = Car.objects.filter(brand=findbrand)
    print(cars)
    return render(req, 'filtercar.html', {'cars':cars, 'title': name})

class DetailPostView(DetailView):
    model = Car
    pk_url_kwarg = 'id'
    template_name = 'postdetail.html'

def BuyCar(req, id):
    getcar = get_object_or_404(Car, id=id)
    if id:
        getcar.quantity -= 1
        getcar.save()
        Orderhistory.objects.create(
            car_info = getcar,
            username = req.user
        )
    return redirect('profile')