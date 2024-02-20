#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

int dsu_union_by_size(int node1, int node2)
{
    int leader_A = dsu_find(node1);
    int leader_B = dsu_find(node2);
    if (group_size[leader_A] > group_size[leader_B])
    {
        parent[leader_B] = leader_A;
        group_size[leader_A] += group_size[leader_B];
    }
    else
    {
        parent[leader_A] = leader_B;
        group_size[leader_B] += group_size[leader_A];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
        {
            cycle = true;
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }
    if (cycle)
        cout << "Cycle Detected!" << endl;
    else
    {
        cout << "No cycle found" << endl;
    }
    return 0;
}