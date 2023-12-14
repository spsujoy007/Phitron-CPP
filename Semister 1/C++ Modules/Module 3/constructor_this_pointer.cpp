#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int id;
    double cgpa;
    Student(int roll, int id, double cgpa)
    {
        this->roll = roll;
        // (*this).roll = roll; // we can dereference like this;
        this->id = id;
        this->cgpa = cgpa;
    }
};

int main()
{
    // welcome to the program sp, let's do some hack;
    int r, i;
    double c;
    cin >> r >> i >> c;
    Student rahim(r, i, c);
    cout << rahim.roll << " " << rahim.id << " " << rahim.cgpa;
    return 0;
}