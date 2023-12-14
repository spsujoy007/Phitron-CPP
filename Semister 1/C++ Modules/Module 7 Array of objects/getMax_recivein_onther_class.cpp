#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }
    Student mx;
    mx.mark = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mx.mark < a[i].mark)
        {
            mx = a[i];
        }
    }
    cout << mx.name << " " << mx.roll << " " << mx.mark;
    return 0;
}