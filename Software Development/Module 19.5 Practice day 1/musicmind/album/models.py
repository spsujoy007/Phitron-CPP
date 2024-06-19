from django.db import models
from musician.models import Musician

# Create your models here.
ratings = [
    ('1', 'One'),
    ('2', 'Two'),
    ('3', 'Three'),
    ('4', 'Four'),
    ('5', 'Five'),
]
class Album(models.Model):
    name = models.CharField(max_length=50)
    musician = models.ForeignKey(Musician, on_delete=models.CASCADE)
    release_date = models.DateTimeField(auto_now_add=True)
    rating = models.CharField(max_length=50, choices=ratings)

    def __str__(self):
        return self.name