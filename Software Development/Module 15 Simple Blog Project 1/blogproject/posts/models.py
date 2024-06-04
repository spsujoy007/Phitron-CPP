from django.db import models
from categories.models import Category
from author.models import Author

# Create your models here.
class Post(models.Model):
    id = models.IntegerField(primary_key=True)
    title = models.CharField(max_length=100)
    content = models.TextField()
    category = models.ManyToManyField(Category)
    author = models.ForeignKey(Author, on_delete=models.CASCADE)
    post_time = models.DateField()

    def __str__(self):
        return f'{self.title}'