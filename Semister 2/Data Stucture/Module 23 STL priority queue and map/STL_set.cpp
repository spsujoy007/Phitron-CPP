#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN);
    }
    // duplicate delete korar easy upay stl set
    // for (auto it = s.begin(); it != s.end(); it++) // auto sort kore dey
    // {
    //     cout << *it << endl;
    // }

    if (s.count(10))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}