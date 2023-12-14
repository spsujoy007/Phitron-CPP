#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    for (int test = 0; test < n; test++)
    {
        int check = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            // cout << a[i];
            if (a[i] == 1)
            {
                check++;
            }
        }
        // cout << check;
        if (check >= 2)
        {
            cnt++;
        }
        check == 0;
    }
    cout << cnt;

    return 0;
}