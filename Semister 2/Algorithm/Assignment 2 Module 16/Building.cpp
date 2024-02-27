#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = 1e5 + 5;
ll parent_array[N];
ll group_size[N];

void dsu_initialize(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        parent_array[i] = -1;
        group_size[i] = 1;
    }
}

ll dsu_find(ll node)
{
    if (parent_array[node] == -1)
        return node;
    ll leader = dsu_find(parent_array[node]);
    parent_array[node] = leader;
    return leader;
}

class Edge
{
public:
    ll u;
    ll v;
    ll w;
    Edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool compare(Edge a, Edge b)
{
    return a.w < b.w;
}

void dsu_union_by_size(ll node1, ll node2)
{
    ll leader_A = dsu_find(node1);
    ll leader_B = dsu_find(node2);
    if (group_size[leader_A] > group_size[leader_B])
    {
        parent_array[leader_B] = leader_A;
        group_size[leader_A] += group_size[leader_B];
    }
    else
    {
        parent_array[leader_A] = leader_B;
        group_size[leader_B] += group_size[leader_A];
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    dsu_initialize(n);
    while (e--)
    {
        ll u, v, c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u, v, c));
    }

    sort(edgeList.begin(), edgeList.end(), compare);
    ll totalCost = 0;

    ll countEdges = 0;
    for (Edge ed : edgeList)
    {
        ll leaderU = dsu_find(ed.u);
        ll leaderV = dsu_find(ed.v);

        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
            countEdges++;
        }
    }
    if (countEdges < n - 1)
        cout << -1 << endl;
    else
        cout << totalCost << endl;

    return 0;
}