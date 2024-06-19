from django import forms
from .models import Musician
class MusicianForm(forms.ModelForm):
    class Meta:
        model = Musician
        fields = "__all__"
        widgets = {
            'first_name': forms.TextInput(attrs={'placeholder': 'Musicians first name'}),
            'last_name': forms.TextInput(attrs={'placeholder': 'Musicians last name'}),
            'email': forms.TextInput(attrs={'placeholder': 'Musicians email'}),
            'phone': forms.TextInput(attrs={'placeholder': 'Musicians phone number'}),
        }