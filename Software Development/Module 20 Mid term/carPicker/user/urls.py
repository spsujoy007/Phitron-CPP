from django.urls import path
from .views import login, RegisterView, UserLoginView, Profile, userLogout
from . import models
urlpatterns = [
    path('login/', UserLoginView.as_view(), name='login_page'),
    path('register/', RegisterView.as_view(), name='signup_page'),
    path('profile/', Profile, name='profile'),
    path('logout/', userLogout, name='logout')
]
