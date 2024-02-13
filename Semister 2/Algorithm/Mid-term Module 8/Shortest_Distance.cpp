#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n, e;
    cin >> n >> e;
    lli adj[n+1][n+1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = 1e18;
            if (i == j)
                adj[i][j] = 0;
        }
    }

    while (e--)
    {
        lli a, b, w;
        cin >> a >> b >> w;
        lli getMin = min(adj[a][b], w);
        adj[a][b] = getMin;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    lli q;
    cin >> q;
    while (q--)
    {
        lli x, y;
        cin >> x >> y;

        if (adj[x][y] == 1e18)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << adj[x][y] << endl;
        }
    }

    return 0;
}