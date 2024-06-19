from django.db import models

# Create your models here.
instruments_name = [
    ('guitar', 'Guitar'),
    ('piano', 'Piano'),
    ('drums', 'Drums'),
    ('violin', 'Violin'),
    ('flute', 'Flute'),
]

class Musician(models.Model):
    first_name = models.CharField(max_length=50)
    last_name = models.CharField(max_length=50)
    email = models.EmailField(max_length=80)
    phone = models.CharField(max_length=11)
    instruemnt_type = models.CharField(max_length=50, choices=instruments_name)

    def __str__(self):
        return self.first_name