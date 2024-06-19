from django.urls import path, include
from .views import AddAlbum
urlpatterns = [
    path('add_album/', AddAlbum.as_view(), name='add_album'),
]
