from django.db import models

# Create your models here.

class Author(models.Model):
    name = models.CharField(max_length=50)
    bio = models.TextField()
    phone_no = models.CharField(max_length=12)

    
    def __str__(self):
        return f'{self.name} - +88{self.phone_no}'