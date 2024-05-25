from django.contrib import admin
from django.urls import path, include

from . import views
urlpatterns = [
    path('', views.home),
    path('apps/', include('practice_app.urls'))
]
