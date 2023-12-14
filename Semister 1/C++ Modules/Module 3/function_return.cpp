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

Student *fun()
{
    Student *rahim = new Student(5, 2, 4.50);
    return rahim;
}

int main()
{
    // welcome to the program sp, let's do some hack;
    Student *ans = fun();
    // cout << ans->roll << " " << ans->clas << " " << ans->gpa;
    delete ans;
    cout << ans->roll << " " << ans->clas << " " << ans->gpa;
    return 0;
}