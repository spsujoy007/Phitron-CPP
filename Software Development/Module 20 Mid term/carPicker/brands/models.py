from django.db import models

# Create your models here.
class Brand(models.Model):
    name = models.CharField(max_length=60)
    creation_date = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f'Brand: {self.name}'