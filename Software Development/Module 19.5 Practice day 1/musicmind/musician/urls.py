from django.urls import path
from .views import AddMusician
urlpatterns = [
    path('add_musician/', AddMusician.as_view(), name='add_musician'),
]
