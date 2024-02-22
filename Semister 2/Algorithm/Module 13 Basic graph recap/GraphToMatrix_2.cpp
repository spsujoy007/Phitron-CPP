#include <bits/stdc++.h>
using namespace std;

void converter(int n, vector<pair<int, int>> adj[])
{
    int mtx[n][n];
    memset(mtx, 0, sizeof(mtx));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mtx[i][j] = -1;
            if (i == j)
                mtx[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> child : adj[i])
        {
            mtx[i][child.first] = child.second;
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
    vector<pair<int, int>> v[n];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        // v[b].push_back(a);
    }
    converter(n, v);
    return 0;
}