#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    int roll;
    double gpa;
    Student(int i, int r, double g)
    {
        id = i;
        roll = r;
        gpa = g;
    };
};

int main()
{
    int i, r;
    double g;
    cin >> i >> r >> g;
    Student rahul(i, r, g);
    cout << rahul.id << " " << rahul.roll << " " << rahul.gpa;
    // welcome to the program sp, let's do some hack;

    return 0;
}