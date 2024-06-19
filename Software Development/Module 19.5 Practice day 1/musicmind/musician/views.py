from django.shortcuts import render
from .forms import MusicianForm
from django.views.generic import CreateView
from . import models
from . import forms
from django.contrib import messages

# def addMusician(req):
#     form = MusicianForm()
#     return render(req, 'add_musician.html', {'form': form})

class AddMusician(CreateView):
    model = models.Musician
    form_class = MusicianForm
    template_name = 'add_musician.html'
    success_url = '/'
    def form_valid(self, form):
        messages.success(r)
        return super().form_valid(form)
