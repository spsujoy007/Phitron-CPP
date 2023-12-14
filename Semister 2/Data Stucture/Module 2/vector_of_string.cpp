#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string getn;
        cin >> getn;
        v.push_back(getn);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}