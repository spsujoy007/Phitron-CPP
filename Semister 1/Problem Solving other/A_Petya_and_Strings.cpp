#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        cnt1 = cnt1 + a[i];
        cnt2 = cnt2 + b[i];
    }

    if (cnt1 < cnt2)
    {
        cout << "-1";
    }
    else if (cnt1 == cnt2)
    {
        cout << "0";
    }
    else
    {
        cout << "1";
    }
    // cout << cnt1 << " " << cnt2;

    return 0;
}