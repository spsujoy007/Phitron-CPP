from django import forms
from .models import AddMusicianModel

class MusicialForm(forms.ModelForm):
    class Meta:
        model = AddMusicianModel
        fields = "__all__"
        widgets = {
            'first_name': forms.TextInput(attrs={'placeholder': 'Musicians first name'}),
            'last_name': forms.TextInput(attrs={'placeholder': 'Musicians last name'}),
            'phone_number': forms.TextInput(attrs={'placeholder': 'Musicians phone number'}),
            'email': forms.TextInput(attrs={'placeholder': 'Musicians email'}),
        }