from django.contrib import admin
from django.urls import path, include
from .views import home
from django.conf import settings
from django.conf.urls.static import static
urlpatterns = [
    path('admin/', admin.site.urls),
    path('', home, name='homepage'),
    path('user/', include('user.urls'))
]

urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)