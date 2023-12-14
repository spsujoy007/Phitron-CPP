#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

bool cmp(Student a, Student b)
{
    if (a.mark == b.mark)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.mark > b.mark;
    }
}

int main()
{
    int n;
    cin >> n;
    Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }
    sort(a, a + n, cmp); // use cmp for get true false;
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }
    return 0;
}