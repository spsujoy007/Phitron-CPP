#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int testc = 0; testc < n; testc++)
    {
        string t;
        cin >> t;
        int first = t[0] + t[1] + t[2];
        int second = t[3] + t[4] + t[5];
        if (first == second)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}