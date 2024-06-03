from django.db import models

# Create your models here.
class ModelForm(models.Model):
    id = models.AutoField(primary_key=True)
    name = models.CharField(max_length=50)
    bio = models.TextField()
    email = models.EmailField(unique=True, max_length=254)
    profile_pic = models.ImageField(upload_to='first_app/upload')
    json_profile = models.JSONField()
    positive_big_integer_field = models.PositiveBigIntegerField()
    slug_field = models.SlugField()
    url_field = models.URLField()

    def __str__(self):
        return f'{self.name} - {self.id}'