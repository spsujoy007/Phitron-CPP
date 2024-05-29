from django.shortcuts import render
from form_app.forms import contactForm, PasswordMatchingSystem

def home(req):
    return render(req, 'home.html')

def about(req):
    print(req.POST)
    if req.method == 'POST':
        name = req.POST.get('name')
        email = req.POST.get('email')
        select = req.POST.get('select')
        return render(req, 'about.html', {'name': name, 'email': email, 'select': select})
    return render(req, 'about.html')

def submit_form(req):
    return render(req, 'form.html')

def djangoForm(req):
    if req.method == 'POST':
        form = contactForm(req.POST, req.FILES)
        contactForm(req.POST, req.FILES)
        if form.is_valid():
            print(form.cleaned_data)
            return render(req, 'django_form.html', {'form' : form})
    else:
        form = contactForm()
    return render(req, 'django_form.html', {'form' : form})

def PasswordMatcher(req):
    if req.method == 'POST':
        form = PasswordMatchingSystem(req.POST, req.FILES)
        PasswordMatchingSystem(req.POST, req.FILES)
        if form.is_valid():
            print(form.cleaned_data)
            return render(req, 'django_form.html', {'form' : form})
    else:
        form = PasswordMatchingSystem()
    return render(req, 'django_form.html', {'form' : form})