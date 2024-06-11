from django.urls import path, include
from . import views

urlpatterns = [
    path('register/', views.register, name="register"),
    path('login/', views.login_form, name="login"),
    path('profile/', views.profilepage, name="profile"),
    path('profile/passchange/', views.passchangeform , name="passchange"),
    path('profile/edit/', views.editProfile, name="editprofile"),
    path('logout/', views.userLogout, name='logout')
]