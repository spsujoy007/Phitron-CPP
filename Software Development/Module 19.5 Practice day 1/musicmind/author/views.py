from django.shortcuts import render, redirect
from django.contrib import messages
from django.contrib.auth.views import LoginView, LogoutView
from . import forms
from django.views.generic.edit import FormView
from django.urls import reverse_lazy
from django.contrib.auth.decorators import login_required


# Create your views here.
# def register(req):
#     if req.method == 'POST':
#         print(req)
#         register_form = forms.RegistrationForm(req.POST)
#         if register_form.is_valid():
#             register_form.save()
#             messages.success(req, 'Account created successfuly')
#             return redirect('/')
#     else:
#         register_form = forms.RegistrationForm()
#     return render(req, 'register.html', {'form' : register_form})

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