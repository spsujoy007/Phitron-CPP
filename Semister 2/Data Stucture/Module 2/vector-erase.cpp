#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // v.erase(v.begin() + 1, v.begin() + 4); // same
    v.erase(v.begin() + 1, v.end() - 1); // same
    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}