#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
vector<int> v[N];

void dfs(int src, int cnc)
{
    bool flag = false;
    for (int child : v[src])
    {
        if (child == cnc)
        {
            flag = true;
            break;
        }
    };

    if (flag == true || src == cnc)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        dfs(a, b);
    }
    return 0;
}