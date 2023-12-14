#include <bits/stdc++.h>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // sort(ar, ar + n);
    sort(ar, ar + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}