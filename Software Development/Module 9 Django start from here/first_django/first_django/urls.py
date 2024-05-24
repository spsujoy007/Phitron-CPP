from django.contrib import admin
from django.urls import path, include
from . import views
urlpatterns = [
    path('', views.home),
    path('firstapp/', include('firstapp.urls'))
]
