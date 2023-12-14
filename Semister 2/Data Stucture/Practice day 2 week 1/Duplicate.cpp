#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());

    bool check = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i] == ar[i + 1])
        {
            check = true;
            break;
        }
    }
    if (check)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}