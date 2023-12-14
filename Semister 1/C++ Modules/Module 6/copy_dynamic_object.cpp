#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int roll;
    int mark1;
    int mark2;
    Person(string name, int roll, int mark1, int mark2)
    {
        (*this).name = name;
        this->roll = roll;
        this->mark1 = mark1;
        this->mark2 = mark2;
    }
    void detail()
    {
        cout << name << ":" << roll << endl;
    }
    int total_marks()
    {
        return mark1 + mark2;
    };
};

int main()
{
    Person *rakib = new Person("Rakib", 20, 83, 96);
    Person *sakib = new Person("Sakib", 30, 95, 98);
    *sakib = *rakib;
    cout << sakib->name << endl; // output Rakib

    return 0;
}
