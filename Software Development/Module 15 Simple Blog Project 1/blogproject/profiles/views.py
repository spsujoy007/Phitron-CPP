from django.shortcuts import render, redirect
from . import forms

# Create your views here.
def add_profile(req):
    if req.method == 'POST':
        print(req)
        profile_form = forms.ProfileForm(req.POST)
        if profile_form.is_valid():
            profile_form.save()
            return redirect('add_profile')
    else:
        profile_form = forms.ProfileForm()
    return render(req, 'add_profile.html', {'form' : profile_form})