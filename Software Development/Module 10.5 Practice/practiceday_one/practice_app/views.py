from django.shortcuts import render

# Create your views here.

def app(req):
    company = {"name" : "It Park", 'earning' : 500000, "employees" : [
    {
        "name": "Ayesha Akter",
        "address": "123 Dhaka Road, Dhaka, Bangladesh",
        "id": 5,
        "department_id": "D01",
        "job_title": "Software Engineer",
        "salary": 60000,
        "join_date": "2022-01-12T10:30:00.000123"
    },
    {
        "name": "Tanvir Hasan",
        "address": "456 Chittagong Lane, Chittagong, Bangladesh",
        "id": 12,
        "department_id": "D02",
        "job_title": "Data Analyst",
        "salary": 55000,
        "join_date": "2022-02-15T09:45:00.000123"
    },
    {
        "name": "Nusrat Jahan",
        "address": "789 Sylhet Avenue, Sylhet, Bangladesh",
        "id": 23,
        "department_id": "D03",
        "job_title": "Project Manager",
        "salary": 80000,
        "join_date": "2022-03-20T08:30:00.000123"
    },
    {
        "name": "Shakib Al Hasan",
        "address": "101 Rajshahi Street, Rajshahi, Bangladesh",
        "id": 34,
        "department_id": "D04",
        "job_title": "Quality Assurance Engineer",
        "salary": 50000,
        "join_date": "2022-04-10T11:00:00.000123"
    },
    {
        "name": "Farhana Islam",
        "address": "202 Khulna Road, Khulna, Bangladesh",
        "id": 45,
        "department_id": "D05",
        "job_title": "UI/UX Designer",
        "salary": 65000,
        "join_date": "2022-05-18T13:20:00.000123"
    },
    {
        "name": "Rahim Uddin",
        "address": "303 Barisal Boulevard, Barisal, Bangladesh",
        "id": 56,
        "department_id": "D01",
        "job_title": "System Administrator",
        "salary": 70000,
        "join_date": "2022-06-22T07:40:00.000123"
    },
    {
        "name": "Shabnam Khan",
        "address": "404 Mymensingh Drive, Mymensingh, Bangladesh",
        "id": 67,
        "department_id": "D02",
        "job_title": "Network Engineer",
        "salary": 65000,
        "join_date": "2022-07-15T12:00:00.000123"
    },
    {
        "name": "Mahbub Alam",
        "address": "505 Rangpur Road, Rangpur, Bangladesh",
        "id": 78,
        "department_id": "D03",
        "job_title": "Database Administrator",
        "salary": 75000,
        "join_date": "2022-08-10T14:30:00.000123"
    },
    {
        "name": "Laila Ahmed",
        "address": "606 Comilla Lane, Comilla, Bangladesh",
        "id": 89,
        "department_id": "D01",
        "job_title": "Frontend Developer",
        "salary": 60000,
        "join_date": "2022-09-25T09:00:00.000123"
    },
    {
        "name": "Kamal Hossain",
        "address": "707 Sylhet Avenue, Sylhet, Bangladesh",
        "id": 90,
        "department_id": "D05",
        "job_title": "Backend Developer",
        "salary": 70000,
        "join_date": "2022-10-05T10:15:00.000123"
    }
]
}
    return render(req, 'apphome.html', company)
