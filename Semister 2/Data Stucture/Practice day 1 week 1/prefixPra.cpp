#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int pre[n];
    pre[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = v[i] + pre[i - 1];
    }

    // while()

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}