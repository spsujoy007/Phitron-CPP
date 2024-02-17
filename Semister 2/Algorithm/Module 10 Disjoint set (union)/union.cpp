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
    int getnode = find(par[node]);
    par[node] = getnode;
    return find(par[node]);
}

int dsa_union(int node1, int node2)
{
    int leader_A = find(node1);
    int leader_B = find(node2);
    par[leader_A] = leader_B;
}

int dsa_union_by_size(int node1, int node2)
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
    dsu_initialize(8);
    cout << find(1) << endl;
    dsa_union(1, 5);
    cout << find(1) << endl;
    return 0;
}