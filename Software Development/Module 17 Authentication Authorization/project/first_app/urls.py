from django.urls import path
from .views import home, singup, user_login, profile, user_logout, pass_change, pass_change2
urlpatterns = [
    path('', home, name='homepage'),
    path('profile/', profile, name='profile'),
    path('signup/', singup, name='signup'),
    path('login/', user_login, name='login'),
    path('logout/', user_logout, name='logout'),
    path('changepass/', pass_change, name='changepass'),
    path('changepass2/', pass_change2, name='changepass2'),
]
