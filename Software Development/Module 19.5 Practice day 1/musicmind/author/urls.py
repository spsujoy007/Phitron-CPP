from django.urls import path, include
from .views import register,UserLoginView
urlpatterns = [
    path('register/', register, name='register'),
    path('login/', UserLoginView.as_view(), name='login'),
]
