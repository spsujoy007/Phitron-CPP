from django.urls import path
from .views import registerUser, loginpage, profile,userLogout, changePassForm, changePassForm2

urlpatterns = [
    path('register/', registerUser, name='register'),
    path('login/', loginpage, name='login'),
    path('profile/', profile, name='profilepage'),
    path('logout/', userLogout, name='userLogout'),
    path('changepass/', changePassForm, name='changepass'),
    path('changepass2/', changePassForm2, name='changepass2'),
]
