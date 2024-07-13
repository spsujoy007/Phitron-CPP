from django.contrib import admin
from django.urls import path, include
from .views import home, DetailPostView, BuyCar, filterCar
from django.conf import settings
from django.conf.urls.static import static
urlpatterns = [
    path('admin/', admin.site.urls),
    path('', home, name='homepage'),
    path('user/', include('user.urls')),
    path('post/<int:id>', DetailPostView.as_view(), name='details'),
    path('brand/<str:name>/', filterCar, name="brand"),
    path('makeorder/<int:id>/', BuyCar, name='makeorder')
]

urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)