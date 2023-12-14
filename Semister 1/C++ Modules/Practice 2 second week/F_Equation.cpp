#include <bits/stdc++.h>
using namespace std;

long long int fun(long long int x, long long int n)
{
    long long int sum = 0;
    for (int i = 2; i < n; i = i + 2)
    {
        sum += pow(x, i);
    }

    return sum;
}

int main()
{
    long long int x, n;
    cin >> x >> n;
    long long int sum = fun(x, n);
    cout << sum;

    return 0;
}