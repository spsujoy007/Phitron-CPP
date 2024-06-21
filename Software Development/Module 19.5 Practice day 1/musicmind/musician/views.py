from django.shortcuts import render, redirect
from django.urls import reverse_lazy
from .forms import MusicianForm
from django.views.generic import CreateView, UpdateView
from . import models
from . import forms
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from . import models
# def addMusician(req):
#     form = MusicianForm()
#     return render(req, 'add_musician.html', {'form': form})

# @login_required
class AddMusician(CreateView):
    model = models.Musician
    form_class = MusicianForm
    template_name = 'add_musician.html'
    success_url = '/'
    def dispatch(self, request, *args, **kwargs):
        if not request.user.is_authenticated:
            return redirect('login')
        return super().dispatch(request, *args, **kwargs)
    def form_valid(self, form):
        return super().form_valid(form)


def edit_musician1(req, email):
    musician = models.Musician.objects.get(pk=email)
    musician_form = forms.MusicialForm(instance=musician)
    if req.method == 'POST':
        musician_form = forms.MusicialForm(req.POST, instance=musician)
        if musician_form.is_valid():
            musician_form.save()
            return redirect('homepage')
        
    return render(req, 'add_musician.html', {'form' : musician_form})

class edit_musician(UpdateView):
    model = models.Musician
    form_class = MusicianForm
    template_name = 'add_musician.html'
    success_url = reverse_lazy('homepage')
    pk_url_kwarg = 'pk'