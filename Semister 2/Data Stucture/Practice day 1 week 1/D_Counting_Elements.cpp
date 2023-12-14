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
    int cnt = 0, start = 0;
    for (int i = 0; i < n; i++, start++)
    {
        auto a = find(v.begin(), v.end(), i + 1);
        if (a == v.end())
            break;
        else
        {
            cnt++;
        };
    }
}