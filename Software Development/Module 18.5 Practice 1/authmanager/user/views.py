from django.shortcuts import render, redirect
from . import form
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.contrib.auth import authenticate, login, update_session_auth_hash, logout
from django.contrib.auth.decorators import login_required
from django.contrib import messages
# Create your views here.
def registerUser(req):
    if req.method == 'POST':
        register_form = form.RegistrationForm(req.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(req, 'Account created successfuly!')
            return redirect('login')
    else:
        register_form = form.RegistrationForm()
    return render(req, 'register.html', {'form': register_form, 'title': 'Registration'})

def loginpage(req):
    if req.method == 'POST':
        form = AuthenticationForm(req, req.POST)
        if form.is_valid():
            username = form.cleaned_data['username']
            userpass = form.cleaned_data['password']
            user = authenticate(username=username, password=userpass)
            if user is not None:
                messages.success(req, 'Login successful!')
                login(req, user)
                return redirect('/')
            else:
                messages.success(req, 'Login failed!')
                return redirect('/')
    else:
        form = AuthenticationForm()
    return render(req, 'login.html', {'form': form, 'title': 'Login'})

@login_required
def profile(req):
    return render(req, 'profile.html', {'title' : 'Profile'})

def changePassForm(req):
    if req.method == 'POST':
        passchange_form = PasswordChangeForm(data=req.POST, user=req.user)
        if passchange_form.is_valid():
            messages.success(req, 'Password updated')
            passchange_form.save()
            messages.success(req, 'Password updated successfuly')
            update_session_auth_hash(req, req.user)
            return redirect('profilepage')
    else:
        passchange_form = PasswordChangeForm(user=req.user)
    return render(req, 'passchange.html', {'form' : passchange_form, 'title':'Password changing form'})

def changePassForm2(req):
    if req.user.is_authenticated:
        if req.method == 'POST':
            # PasswordChange form without current pass
            form = SetPasswordForm(user=req.user, data=req.POST)
            if form.is_valid():
                messages.success(req, 'Password updated')
                form.save()
                update_session_auth_hash(req, req.user)
                return redirect('profilepage')
        else:
            form = SetPasswordForm(user=req.user)
        return render(req, 'passchange.html', {'form' : form})
    else:
        return redirect('login')


@login_required
def userLogout(req):
    messages.success(req, 'Logout successful!')
    logout(req)
    return redirect('/')