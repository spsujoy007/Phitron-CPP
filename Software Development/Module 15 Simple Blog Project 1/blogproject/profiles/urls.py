from django.urls import path, include
from profiles.views import add_profile

urlpatterns = [
    path('add/', add_profile, name="add_profile")
]