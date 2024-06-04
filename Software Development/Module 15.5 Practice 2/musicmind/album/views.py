from django.shortcuts import render, redirect
from .  import forms
from .models import AddAlbumModel
# Create your views here.
def add_album(req):
    if req.method == 'POST':
        album_form = forms.AlbumForm(req.POST)
        if album_form.is_valid():
            album_form.save()
            return redirect('homepage')
    else:
        album_form = forms.AlbumForm
    return render(req, 'add_album.html', {'form' : album_form})

def edit_album(req, id):
    album = AddAlbumModel.objects.get(pk=id)
    default_album = forms.AlbumForm(instance=album)
    if req.method == 'POST':
        default_album = forms.AlbumForm(req.POST, instance=album)
        if default_album.is_valid():
            default_album.save()
            return redirect('homepage')

    return render(req, 'add_album.html', {'form' : default_album})

def delete_album(req, id):
    AddAlbumModel.objects.get(pk=id).delete()
    return redirect('homepage')