#include <bits/stdc++.h>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    long long int n;
    cin >> n;
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << "\n";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << ar[i] << " ";
    }
    return 0;
}