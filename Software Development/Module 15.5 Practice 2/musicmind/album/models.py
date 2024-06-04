from django.db import models
from musician.models import AddMusicianModel

ratings = [
    ('1', 'One'),
    ('2', 'Two'),
    ('3', 'Three'),
    ('4', 'Four'),
    ('5', 'Five'),
]

class AddAlbumModel(models.Model):
    aid = models.AutoField(primary_key=True, auto_created=True)
    name = models.CharField(max_length=50)
    musician = models.ForeignKey(AddMusicianModel, on_delete=models.CASCADE)
    release_date = models.DateField(auto_now=True)
    rating = models.CharField(max_length=50, choices=ratings)
    def __str__(self):
        return self.name