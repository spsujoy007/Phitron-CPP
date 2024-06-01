from django import forms
from crispy_bootstrap5.bootstrap5 import BS5Accordion


class DjangoForm(forms.Form):
    name = forms.CharField(max_length=50, label='Your name')
    bio = forms.CharField(widget=forms.Textarea(attrs={'row':1, 'id': 'bio'}), required=False)
    email = forms.EmailField(label="Enter your email")
    agree = forms.BooleanField(label='Are you agree')
    birthdate = forms.DateField(widget=forms.SelectDateWidget(attrs={'class' : 'mb-2'}), label='Birth Date')
    favorite_color = forms.ChoiceField(widget=forms.RadioSelect, choices=[('red', 'Red'), ('green', "Green"), ('blue', 'Blue')])

    hobbies = forms.MultipleChoiceField(widget=forms.CheckboxSelectMultiple, choices=[('Playing', 'Playing'),
    ('videography', 'Videography'),
    ('programming', 'Programming'),])