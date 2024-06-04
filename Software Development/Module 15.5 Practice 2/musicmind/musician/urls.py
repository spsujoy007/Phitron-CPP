from django.urls import path

from .views import add_musician, edit_musician
urlpatterns = [
    path('add/', add_musician, name='add_musician'),
    path('edit/<str:email>', edit_musician, name='edit_musician')
]
