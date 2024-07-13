from django.shortcuts import render, redirect
from django.urls import reverse_lazy
from django.views.generic.edit import FormView
from django.contrib.auth.views import LoginView, LogoutView
from django.contrib import messages
from . import forms
from django.contrib.auth import logout
from orders.models import Orderhistory

# Create your views here.
def login(req):
    return render(req, 'login.html')

class RegisterView(FormView):
    form_class = forms.RegistrationForm
    template_name = 'register.html'
    success_url = reverse_lazy('homepage')

    def form_valid(self, form):
        form.save()
        messages.success(self.request, 'Account created successfully!')
        return super().form_valid(form)
    

class UserLoginView(LoginView):
    template_name = 'login.html'
    # success_url = reverse_lazy('profile')
    def get_success_url(self):
        return reverse_lazy('homepage')
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
    
def Profile(req):
    if req.user.is_authenticated:
        order_history = Orderhistory.objects.filter(username=req.user.username).order_by('-id')
        if req.method == 'POST':
            profile_form = forms.ChangeUserForm(req.POST, instance=req.user)
            if profile_form.is_valid():
                profile_form.save()
                messages.success(req, 'Profile updated successfuly')
                return redirect('profile')
        else:
            profile_form = forms.ChangeUserForm(instance=req.user)
        return render(req, 'profile.html', {'form' : profile_form, 'type':'Edit Profile', 'order_history': order_history})
    else:
        return redirect('loginpage')
    
def userLogout(req):
    logout(req)
    return redirect('login_page')