from django import forms
from . import models
class AlbumForm(forms.ModelForm):
    class Meta:
        model = models.AddAlbumModel
        fields = "__all__"

        widgets = {
            'name' : forms.TextInput(attrs={'placeholder':'Enter a album name'})
        }