from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home),
    path('about/', views.about, name='about'),
    path('form/', views.submit_form, name='submit_form'),
    path('djangoform/', views.djangoForm, name='django_form'),
    path('password/', views.PasswordMatcher, name='password_form'),
    # path('app/', include('form_app.urls'))
]
