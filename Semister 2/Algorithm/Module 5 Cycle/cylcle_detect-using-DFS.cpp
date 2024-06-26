#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int parrent_array[N];

bool ans;

void dfs(int parent)
{
    // cout << parent << endl;
    vis[parent] = true;

    for (int child : adj[parent])
    {
        if (vis[child] == true && parrent_array[parent] != child)
        {
            ans = true;
        }
        if (!vis[child])
        {
            parrent_array[child] = parent;
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ans = false;
    memset(vis, false, sizeof(vis));
    memset(parrent_array, -1, sizeof(parrent_array));

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    
    if (ans)
        cout << "Cycle Detected";
    else
        cout << "No cycle found";
    return 0;
}