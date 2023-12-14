#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {100, 200, 300, 400};
    v.insert(v.begin() + 5, v2.begin(), v2.end());
    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}