#include <iostream>
using namespace std;

class Student
{
public:
    char section;
    int roll;
    double cgpa;
};

int main()
{
    // welcome to the program sp, let's do some hack;
    Student sharuk, salman;

    cout << sharuk.section << " " << sharuk.roll << " " << sharuk.cgpa << endl;
    cout << salman.section << " " << salman.roll << " " << salman.cgpa << endl;

    return 0;
}