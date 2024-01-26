#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
int level[1005];

void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool check = false;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        if (par == des)
        {
            cout << level << endl;
            check = true;
        }
        // cout << par << endl;
        // for (int i = 0; i < v[par].size(); i++)
        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }
    if (check == false)
        cout << "No root" << endl;
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
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(src, 9);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " " << level[i] << endl;
    // }//
    return 0;
}