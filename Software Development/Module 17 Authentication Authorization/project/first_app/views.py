from django.shortcuts import render, redirect
from .forms import RegistrationForm, ChangeUserForm
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
# Create your views here.
def home(req):
    if req.method == 'POST':
        form = RegistrationForm(req.POST)
        if form.is_valid():
            form.save()
            messages.success(req, 'Account created successfuly')
            messages.warning(req, 'Welcome dear')
            print(form.cleaned_data)
            # return redirect('homepage')
    else:
        form = RegistrationForm()
    return render(req, 'home.html', {'form': form})

def singup(req):
    if not req.user.is_authenticated:
        if req.method == 'POST':
            form = RegistrationForm(req.POST)
            if form.is_valid():
                form.save()
                messages.success(req, 'Account created successfuly')
                messages.warning(req, 'Welcome dear')
                print(form.cleaned_data)
                # return redirect('homepage')
        else:
            form = RegistrationForm()
        return render(req, 'signup.html', {'form': form})
    else:
        return redirect('profile')

def user_login(req):
    if not req.user.is_authenticated:
        if req.method == 'POST':
            form = AuthenticationForm(request=req, data=req.POST)
            if form.is_valid():
                name = form.cleaned_data['username']
                userpass = form.cleaned_data['password']
                user = authenticate(username = name, password = userpass) #check valid user
                print(user)
                if user is not None:
                    login(req, user)
                    return redirect('homepage')
        else:
            form = AuthenticationForm()
        return render(req, 'login.html', {'form':form})
    else:
        return redirect('profile')

def profile(req):
    if req.user.is_authenticated:
        if req.method == 'POST':
            form = ChangeUserForm(req.POST, instance=req.user)
            if form.is_valid():
                form.save()
                messages.success(req, 'Account updated successfuly')
                # messages.warning(req, 'Welcome dear')
                print(form.cleaned_data)
                # return redirect('homepage')
        else:
            form = ChangeUserForm(instance = req.user)
        return render(req, 'profile.html', {'form': form})
    else:
        return redirect('login')
        

def user_logout(req):
    logout(req)
    return redirect('login')

def pass_change(req):
    if req.user.is_authenticated:
        # PasswordChange form with current pass
        if req.method == 'POST':
            form = PasswordChangeForm(user=req.user, data=req.POST)
            if form.is_valid():
                form.save()
                update_session_auth_hash(req, req.user)
                return redirect('profile')
        else:
            form = PasswordChangeForm(user=req.user)
        return render(req, 'passchange.html', {'form' : form})
    else:
        return redirect('login')
    
def pass_change2(req):
    if req.user.is_authenticated:
        if req.method == 'POST':
            # PasswordChange form without current pass
            form = SetPasswordForm(user=req.user, data=req.POST)
            if form.is_valid():
                form.save()
                update_session_auth_hash(req, req.user)
                return redirect('profile')
        else:
            form = SetPasswordForm(user=req.user)
        return render(req, 'passchange.html', {'form' : form})
    else:
        return redirect('login')


def change_userdata(req):
    if req.user.is_authenticated:
        if req.method == 'POST':
            form = ChangeUserForm(req.POST, isinstance=req.user)
            if form.is_valid():
                form.save()
                messages.success(req, 'Account updated successfuly')
                messages.warning(req, 'Welcome dear')
                print(form.cleaned_data)
                # return redirect('homepage')
        else:
            form = ChangeUserForm(isinstance=req.user)
        return render(req, 'profile.html', {'form': form})
    else:
        return redirect('login')