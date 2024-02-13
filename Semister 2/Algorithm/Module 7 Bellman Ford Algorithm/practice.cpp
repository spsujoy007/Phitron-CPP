#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
int dis[N];

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> Edgelist;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        Edgelist.push_back(Edge(u, v, c));
        // Edgelist.push_back(Edge(v, u, c));
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        for (Edge ed : Edgelist)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;

            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for (Edge ed : Edgelist)
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;

        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
        cout << "Cycle detected - no answer found!" << endl;
    else
    {
        for (Edge ed : Edgelist)
        {
            cout << ed.u << " " << ed.v << " " << ed.c << endl;
        }
    }

    return 0;
}