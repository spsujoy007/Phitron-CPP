#include <bits/stdc++.h>
using namespace std;

void converter(int n, vector<int> adj[])
{
    int mtx[n][n];
    memset(mtx, 0, sizeof(mtx));

    for (int i = 0; i < n; i++)
    {
        for (auto child : adj[i])
        {
            mtx[i][child] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mtx[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        // v[b].push_back(a);
    }
    converter(n, v);
    return 0;
}