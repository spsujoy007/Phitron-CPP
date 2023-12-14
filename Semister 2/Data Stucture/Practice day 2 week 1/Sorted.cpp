#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        bool chk = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                chk = false;
                break;
            }
        }
        cout << (chk ? "YES" : "NO") << endl;
    }
    return 0;
}