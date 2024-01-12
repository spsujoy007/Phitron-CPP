#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    string name;
    int roll;
    int mark;
    Students(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int r, m;
        cin >> name >> r >> m;
        Students obj(name, r, m);
        cout << obj.name << endl;
    }
    return 0;
}
