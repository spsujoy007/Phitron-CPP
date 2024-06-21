from django.shortcuts import render, redirect
from django.urls import reverse_lazy
from .forms import AlbumForm
from django.views.generic import CreateView
from django.contrib.auth.decorators import login_required
from . import models
from . import forms

# def addMusician(req):
#     form = MusicianForm()
#     return render(req, 'add_musician.html', {'form': form})
# @login_required
class AddAlbum(CreateView):
    model = models.Album
    form_class = AlbumForm
    template_name = 'add_album.html'
    success_url = '/'

    def dispatch(self, request, *args, **kwargs):
        if not request.user.is_authenticated:
            return redirect('login')
        return super().dispatch(request, *args, **kwargs)
    
    def form_valid(self, form):
        return super().form_valid(form)
