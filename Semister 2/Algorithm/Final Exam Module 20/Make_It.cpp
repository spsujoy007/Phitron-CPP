#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = 1e5 + 5;
ll dp[N];

int finder(ll n, ll crValue)
{
    if (crValue == n)
        return true;
    if (crValue > n || crValue > N)
        return false;
    if (dp[crValue] != -1)
        return dp[crValue];
    return dp[crValue] = finder(n, crValue + 3) || finder(n, crValue * 2);
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        for (int i = 0; i <= n; i++)
            dp[i] = -1;

        if (finder(n, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}