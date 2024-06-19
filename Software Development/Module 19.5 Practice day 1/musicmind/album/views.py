from django.shortcuts import render
from .forms import AlbumForm
from django.views.generic import CreateView
from . import models
from . import forms

# def addMusician(req):
#     form = MusicianForm()
#     return render(req, 'add_musician.html', {'form': form})

class AddAlbum(CreateView):
    model = models.Album
    form_class = AlbumForm
    template_name = 'add_album.html'
    success_url = '/'
    def form_valid(self, form):
        return super().form_valid(form)
