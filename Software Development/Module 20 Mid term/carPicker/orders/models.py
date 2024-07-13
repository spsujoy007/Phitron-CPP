from django.db import models
from cars.models import Car
# Create your models here.
class Orderhistory(models.Model):
    car_info = models.ForeignKey(Car, on_delete=models.DO_NOTHING)
    date = models.DateTimeField(auto_now_add=True)
    username = models.CharField(max_length=50)

    def __str__(self):
        return f'{self.car_info.name} - {self.username}'