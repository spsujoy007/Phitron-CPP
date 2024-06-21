from django.urls import path
from .views import AddMusician, edit_musician
urlpatterns = [
    path('add_musician/', AddMusician.as_view(), name='add_musician'),
    path('edit/<int:pk>/', edit_musician.as_view(), name='edit_musician'),
]
