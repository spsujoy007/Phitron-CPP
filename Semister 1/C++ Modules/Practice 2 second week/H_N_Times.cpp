#include <bits/stdc++.h>
using namespace std;

void fun(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        char c;
        cin >> n >> c;
        fun(n, c);
    }
    return 0;
}