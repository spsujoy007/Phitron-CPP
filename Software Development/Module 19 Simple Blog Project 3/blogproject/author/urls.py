from django.urls import path, include
from . import views
from django.contrib.auth.views import LogoutView
urlpatterns = [
    path('register/', views.register, name="register"),
    # path('login/', views.login_form, name="login"),
    path('login/', views.UserLoginView.as_view(), name="login"),
    path('profile/', views.profilepage, name="profile"),
    path('profile/passchange/', views.passchangeform , name="passchange"),
    path('profile/edit/', views.editProfile, name="editprofile"),
    path('logout/', views.userLogout, name='logout')
    # path('logout/', views.LogoutView.as_view(), name='logout')
]