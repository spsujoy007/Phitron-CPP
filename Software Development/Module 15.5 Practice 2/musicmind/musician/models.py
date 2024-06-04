from django.db import models

# Create your models here.
instruments_name = [
    ('guitar', 'Guitar'),
    ('piano', 'Piano'),
    ('drums', 'Drums'),
    ('violin', 'Violin'),
    ('flute', 'Flute'),
]
class AddMusicianModel(models.Model):
    first_name = models.CharField(max_length=50)
    last_name = models.CharField(max_length=50)
    phone_number = models.CharField(max_length=11)
    email = models.EmailField(max_length=254, primary_key=True)
    instrument_type = models.CharField(max_length=50, choices=instruments_name)

    def __str__(self):
        return self.first_name