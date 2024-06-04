from django.shortcuts import render, redirect
from .  import forms
from .models import AddMusicianModel
# Create your views here.
def add_musician(req):
    if req.method == 'POST':
        music_form = forms.MusicialForm(req.POST)
        if music_form.is_valid():
            music_form.save()
            return redirect('add_album')
    else:
        music_form = forms.MusicialForm
    return render(req, 'add_musician.html', {'form' : music_form})

def edit_musician(req, email):
    musician = AddMusicianModel.objects.get(pk=email)
    musician_form = forms.MusicialForm(instance=musician)
    if req.method == 'POST':
        musician_form = forms.MusicialForm(req.POST, instance=musician)
        if musician_form.is_valid():
            musician_form.save()
            return redirect('homepage')
        
    return render(req, 'add_musician.html', {'form' : musician_form})