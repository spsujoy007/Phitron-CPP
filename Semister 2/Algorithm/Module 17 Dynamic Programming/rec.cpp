#include <bits/stdc++.h>
using namespace std;

int fec(int n)
{
    if (n == 0)
        return 1;
    int sum = fec(n - 1);
    return sum * n;
}

int main()
{
    int sum = fec(4);
    cout << sum;
    return 0;
}