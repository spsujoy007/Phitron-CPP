from django.db import models
from brands.models import Brand

# Create your models here.
class Car(models.Model):
    name = models.CharField(max_length=50)
    brand = models.ForeignKey(Brand, on_delete=models.CASCADE)
    title = models.CharField(max_length=60)
    details = models.TextField()
    price = models.IntegerField()
    quantity = models.IntegerField()
    added_time = models.DateTimeField(auto_now_add=True)
    image = models.ImageField(upload_to='cars/media/uploads/', blank=True, null=True)

    def __str__(self):
        return self.name