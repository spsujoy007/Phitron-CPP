#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v3(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v3[i];
    }
    for (int i = 0; i < n; i++)
    {
        v3.insert(v3.begin() + n, v1.begin(), v1.end());
    }
    for (int i = 0; i < n + n; i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}