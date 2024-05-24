from django.shortcuts import render
# from django.http import HttpResponse

# Create your views here.
def home(request):
    user = {"name" : "Sujoy Paul", "age" : 19, "lst" : ['python', 'is', 'best'] , "job" : "Coding", "courses": [
    {
      "id": "1",
      "name": "Python Programming",
      "fee": 5123
    },
    {
      "id": "2",
      "name": "JavaScript Development",
      "fee": 6845
    },
    {
      "id": "3",
      "name": "Java for Beginners",
      "fee": 4398
    },
    {
      "id": "4",
      "name": "C++ Programming",
      "fee": 7842
    },
    {
      "id": "5",
      "name": "Ruby on Rails",
      "fee": 3579
    },
    {
      "id": "6",
      "name": "PHP Development",
      "fee": 2991
    },
    {
      "id": "7",
      "name": "Swift for iOS",
      "fee": 9354
    },
    {
      "id": "8",
      "name": "Kotlin for Android",
      "fee": 4120
    },
    {
      "id": "9",
      "name": "Go Language",
      "fee": 6512
    },
    {
      "id": "10",
      "name": "Rust Programming",
      "fee": 5386
    }
  ]}
    return render(request, "home.html", user)

def about(request):
    return render(request, "about.html")

def contact(request):
    return render(request, "contact.html")