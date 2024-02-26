#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int gp_size[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        gp_size[i] = 1;
    }
}

int find(int node)
{
    if (par[node] == -1)
        return node;
    par[node] = find(par[node]);
    return par[node];
}

void dsa_union_by_size(int node1, int node2)
{
    int leader_A = find(node1);
    int leader_B = find(node2);
    if (gp_size[leader_A] > gp_size[leader_B])
    {
        par[leader_B] = leader_A;
        gp_size[leader_A] += gp_size[leader_B];
    }
    else
    {
        par[leader_A] = leader_B;
        gp_size[leader_B] += gp_size[leader_A];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    int cycleCount = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leader_a = find(a);
        int leader_b = find(b);
        if (leader_a == leader_b)
        {
            cycleCount++;
        }
        else
        {
            dsa_union_by_size(a, b);
        }
    }
    cout << cycleCount << endl;
    return 0;
}