#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    string name = "Rakib";
    int age = 22;
    void hello()
    {
        cout << name << " " << age << endl;
    }
}
namespace Sakib
{
    string name = "Sakib";
    int age = 25;
    void hello()
    {
        cout << name << " " << age << endl;
    }
}
using namespace Rakib;

int main()
{
    // create namespaces;
    // cout << age;
    Rakib::age; // if using namespace Rakib not calling;

    return 0;
}