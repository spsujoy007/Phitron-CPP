#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
bool path[N];

bool ans;

void dfs(int parent)
{
    vis[parent] = true;
    path[parent] = true;

    for (int child : adj[parent])
    {
        if (path[child])
        {
            ans = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
    path[parent] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ans = false;
    memset(vis, false, sizeof(vis));

    if (ans)
        cout << "Cycle Detected";
    else
        cout << "No cycle found";
    return 0;
}