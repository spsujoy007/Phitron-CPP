#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write C++
    int n;
    cin >> n;
    int ar[n], sum[n];
    int gt;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        gt += ar[i];
        // sum[i] = gt + ar[i];
    }
    cout << gt;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << sum[i] << " ";
    // }

    return 0;
}