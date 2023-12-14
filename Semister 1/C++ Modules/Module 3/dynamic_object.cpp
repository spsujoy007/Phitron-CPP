#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int clas;
    double gpa;
    Student(int roll, int clas, double gpa)
    {
        this->roll = roll;
        this->clas = clas;
        this->gpa = gpa;
    }
};

int main()
{
    // welcome to the program sp, let's do some hack;
    // Student rahul(5, 2, 4.50);
    Student *karim = new Student(5, 2, 4.50);
    cout << karim->roll << " " << karim->clas << " " << karim->gpa;
    return 0;
}