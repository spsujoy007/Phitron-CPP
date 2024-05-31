from django.shortcuts import render, redirect
from . import models
# Create your views here.
def home(req):
    students = models.Student.objects.all() #for get all students data
    print(students)
    return render(req, 'home.html', {'students' : students})

def delete_student(req, roll):
    student = models.Student.objects.get(pk = roll).delete() # for delete a student
    print(student)
    return redirect('homepage')