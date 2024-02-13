#include <bits/stdc++.h>
#define lli long long int
using namespace std;

class Edge
{
public:
    lli u;
    lli v;
    lli c;
    Edge(lli u, lli v, lli c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
lli dis[N];

int main()
{
    int n, e;
    cin >> n >> e;

    vector<Edge> edgelist;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgelist.push_back(Edge(a, b, c));
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
    }

    lli src;
    cin >> src;
    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ev : edgelist)
        {
            int u = ev.u;
            int v = ev.v;
            int c = ev.c;
            if (dis[u] < 1e18 && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool detect_cycle = false;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ev : edgelist)
        {
            int u = ev.u;
            int v = ev.v;
            int c = ev.c;
            if (dis[u] < 1e18 && dis[u] + c < dis[v])
            {
                detect_cycle = true;
                break;
            }
        }
    }

    if (detect_cycle == true)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {

        lli ts;
        cin >> ts;

        int total = 0;
        while (ts--)
        {
            lli d;
            cin >> d;

            if (dis[d] != 1e18)
            {

                cout << dis[d] << endl;
            }
            else
                cout << "Not Possible" << endl;
        }
    }

    return 0;
}