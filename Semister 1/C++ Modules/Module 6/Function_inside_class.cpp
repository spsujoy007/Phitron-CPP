#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int roll;
    int mark1;
    int mark2;
    int mark3;
    Person(string name, int roll, int mark1, int mark2, int mark3)
    {
        (*this).name = name;
        this->roll = roll;
        this->mark1 = mark1;
        this->mark2 = mark2;
        this->mark3 = mark3;
    }
    void detail()
    {
        cout << "_______" << endl;
        cout << name << ":" << roll << endl;
    }
    int total_marks()
    {
        detail();
        cout << "Total marks: ";
        return mark1 + mark2 + mark3;
    };
};

int main()
{
    Person rakib("Rakib", 20, 83, 96, 89);
    Person sakib("Sakib", 18, 89, 94, 86);
    Person pakib("Pakib", 25, 87, 95, 88);
    cout << rakib.total_marks() << endl;
    cout << sakib.total_marks() << endl;
    cout << pakib.total_marks() << endl;

    return 0;
}