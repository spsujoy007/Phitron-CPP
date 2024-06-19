from django.urls import path, include
from posts.views import add_post, AddPostCreateView, edit_post, delete_post, EditPostView, DeletePostView, DetailPostView

urlpatterns = [
    path('add/', add_post, name="add_post"),
    # path('add/', AddPostCreateView.as_view(), name="add_post"),
    # path('edit/<int:id>/', edit_post, name="edit_post"),
    path('edit/<int:id>/', EditPostView.as_view(), name="edit_post"),
    # path("delete/<int:id>/", delete_post, name="delete_post")
    path("delete/<int:id>/", DeletePostView.as_view(), name="delete_post"),
    path("details/<int:id>/", DetailPostView.as_view(), name="detail_post")
]