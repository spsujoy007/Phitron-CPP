#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e6 + 5;
ll ar[N];

ll fibo(ll n)
{
    if (n == 0 || n == 1)
        return n;
    if (ar[n] != -1)
    {
        return ar[n];
    }
    ll sum = fibo(n - 1) + fibo(n - 2);
    ar[n] = sum;
    return sum;
}

int main()
{
    ll n;
    cin >> n;
    memset(ar, -1, sizeof(ar));
    ll sum = fibo(n);
    cout << sum << endl;

    return 0;
}