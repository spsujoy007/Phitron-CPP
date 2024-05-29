from django import forms
from crispy_bootstrap5.bootstrap5 import BS5Accordion
from django.core import validators

class contactForm(forms.Form):
    # BS5Accordion(
    #     AccordionGroup("group name", "form_field_1", "form_field_2"),
    #     AccordionGroup("another group name", "form_field"),
    #     flush=True,
    #     always_open=True
    # )
    # name = forms.CharField(label='Enter your name: ', required=True, initial='SPSUJOY', help_text='Must be 8+ charecters')
    name = forms.CharField(validators=[validators.MaxLengthValidator(10, "Enter a name atleast 10 charecters")])
    email = forms.EmailField(label="Enter your email: ", required=True)
    bio = forms.CharField(label="Something about your self...", max_length=500, required=False, widget=forms.Textarea)
    age = forms.IntegerField(label='Enter your age' , required=False)
    weight = forms.FloatField(label="Enter your weight",required=True)
    balance = forms.DecimalField(label="Enter your balance", required=False)
    check = forms.BooleanField(label="Are you sure",required=False, disabled=True, )
    birthday = forms.DateField(required=False)
    # appointment = forms.DateTimeField()
    choise = [('S', 'Small'), ('M', 'Mediam'), ('L', "Large")]
    size = forms.ChoiceField(choices=choise)

class PasswordMatchingSystem(forms.Form):
    name = forms.CharField(widget=forms.TextInput)
    password = forms.CharField(widget=forms.PasswordInput, max_length=8)
    confirm_password = forms.CharField(widget=forms.TextInput , max_length=8, required=False)

    def clean(self):
        clean_data = super().clean()
        val_pass = self.cleaned_data['password']
        val_conpass = self.cleaned_data['confirm_password']
        if val_pass != val_conpass:
            raise forms.ValidationError("Password does not matched!")
        
