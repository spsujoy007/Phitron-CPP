#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
vector<int> v[N];

void dfs(int s)
{
    cout << s << endl;
    vis[s] = true;

    for (int child : v[s])
    {
        if (!vis[child])
        {
            vis[child] = true;
            dfs(child);
        }
    }
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
        // v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(2);
    return 0;
}