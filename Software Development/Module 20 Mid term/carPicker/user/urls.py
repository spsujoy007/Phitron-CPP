from django.urls import path
from .views import login, register
urlpatterns = [
    path('login/', login, name='login_page'),
    path('register/', register, name='signup_page')
]
