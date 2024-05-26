from django.shortcuts import render

# Create your views here.
def index(req):
    return render(req, 'index.html')

def about(req):
    page = req.GET
    # print(page)
    return render(req, 'about.html', {'id': req.GET})
