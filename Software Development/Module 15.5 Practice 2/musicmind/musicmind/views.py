from django.shortcuts import render
from album.models import AddAlbumModel
def home(req):
    albums = AddAlbumModel.objects.all()
    return render(req, 'home.html', {'albums' : albums})