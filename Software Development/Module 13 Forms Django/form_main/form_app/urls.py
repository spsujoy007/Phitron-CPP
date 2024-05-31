from django.urls import path, include
from . import views

urlpatterns = [
    path('about/', views.home, name='about'),
    path('form/', views.formpage, name='form'),
    path('password/', views.passwordForm, name='password_form'),
    # path('app/', include('form_app.urls'))
]
