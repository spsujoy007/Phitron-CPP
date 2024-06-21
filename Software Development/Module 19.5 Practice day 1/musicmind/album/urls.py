from django.urls import path, include
from .views import AddAlbum, edit_album, Delete_album
urlpatterns = [
    path('add_album/', AddAlbum.as_view(), name='add_album'),
    path('edit_album/<int:pk>', edit_album.as_view(), name='edit_album'),
    path('delete_album/<int:pk>', Delete_album.as_view(), name='delete_album'),
]
