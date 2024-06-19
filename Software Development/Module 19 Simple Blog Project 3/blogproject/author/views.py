from django.shortcuts import render, redirect
from . import form
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm
from django.contrib.auth import authenticate, login, update_session_auth_hash, logout
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from django.urls import reverse_lazy
from posts.models import Post

# Create your views here.
def register(req):
    if req.method == 'POST':
        print(req)
        register_form = form.RegistrationForm(req.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(req, 'Account created successfuly')
            return redirect('/')
    else:
        register_form = form.RegistrationForm()
    return render(req, 'register.html', {'form' : register_form, 'type':'Register'})

from django.contrib.auth.views import LoginView, LogoutView

def login_form(req):
    if req.method == 'POST':
        form = AuthenticationForm(req, req.POST)
        if form.is_valid():
            user_name = form.cleaned_data['username']
            user_pass = form.cleaned_data['password']
            user = authenticate(username=user_name, password=user_pass)

            if user is not None:
                messages.success(req, 'Login successful')
                login(req, user)
                return redirect('/')
            else:
                messages.warning(req, 'Login information incorrect')
                return redirect('register')
    else:
        form = AuthenticationForm()
    
    return render(req, 'register.html', {'form': form, 'type' : 'Login'})

class UserLoginView(LoginView):
    template_name = 'register.html'
    # success_url = reverse_lazy('profile')
    def get_success_url(self):
        return reverse_lazy('profile')
    def form_valid(self, form):
        messages.success(self.request, 'Logged in successful')
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.success(self.request, 'Login information incorrect')
        return super().form_invalid(form)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['type'] = 'login'
        return context

@login_required
def profilepage(req):
    data = Post.objects.filter(author = req.user)
    return render(req, 'profile.html', {'type':'Profile', 'data': data})
    
@login_required
def editProfile(req):
    if req.user.is_authenticated:
        if req.method == 'POST':
            profile_form = form.ChangeUserForm(req.POST, instance=req.user)
            if profile_form.is_valid():
                profile_form.save()
                messages.success(req, 'Profile updated successfuly')
                return redirect('profile')
        else:
            profile_form = form.ChangeUserForm(instance=req.user)
        return render(req, 'editprofile.html', {'form' : profile_form, 'type':'Edit Profile'})
    else:
        return redirect('login')
    
def passchangeform(req):
    if req.method == 'POST':
        passchange_form = PasswordChangeForm(data=req.POST, user=req.user)
        if passchange_form.is_valid():
            passchange_form.save()
            messages.success(req, 'Password updated successfuly')
            update_session_auth_hash(req, req.user)
            return redirect('profile')
    else:
        passchange_form = PasswordChangeForm(user=req.user)
    return render(req, 'passchange.html', {'form' : passchange_form, 'type':'Password changing form'})


def userLogout(req):
    logout(req)
    return redirect('login')