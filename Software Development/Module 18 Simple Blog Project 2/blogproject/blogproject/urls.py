from django.contrib import admin
from django.urls import path, include
from blogproject.views import home
urlpatterns = [
    path('admin/', admin.site.urls),
    path('', home, name='home'),
    path('category/<slug:category_slug>/', home, name='category_wise_post'),
    path('author/', include('author.urls')),
    path('posts/', include('posts.urls')),
    path('categories/', include('categories.urls')),
]