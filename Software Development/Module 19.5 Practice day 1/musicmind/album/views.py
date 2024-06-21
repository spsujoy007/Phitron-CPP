from django.shortcuts import render, redirect
from django.urls import reverse_lazy
from .forms import AlbumForm
from .models import Album
from django.views.generic import CreateView, UpdateView, DeleteView
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


class edit_album(UpdateView):
    model = models.Album
    form_class = AlbumForm
    template_name = 'add_album.html'
    success_url = reverse_lazy('homepage')
    pk_url_kwarg = 'pk'

class Delete_album(DeleteView):
    model = models.Album
    template_name = 'delete_album.html'
    success_url = reverse_lazy('homepage')
    pk_url_kwarg = 'pk'