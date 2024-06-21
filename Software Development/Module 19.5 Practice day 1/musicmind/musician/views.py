from django.shortcuts import render, redirect
from .forms import MusicianForm
from django.views.generic import CreateView
from . import models
from . import forms
from django.contrib import messages
from django.contrib.auth.decorators import login_required

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
