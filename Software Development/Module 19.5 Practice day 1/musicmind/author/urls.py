from django.urls import path, include
from .views import UserLoginView, RegisterView
urlpatterns = [
    path('register/', RegisterView.as_view(), name='register'),
    path('login/', UserLoginView.as_view(), name='login'),
]
