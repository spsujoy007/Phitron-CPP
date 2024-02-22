#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int gp_size[N];
int level[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        gp_size[i] = 1;
        level[i] = 0;
    }
}

int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
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

int dsa_union_by_level(int node1, int node2)
{
    int leader_A = find(node1);
    int leader_B = find(node2);

    if (level[leader_A] > level[leader_B])
    {
        par[leader_A] = leader_B;
    }
    else if (level[leader_B] > level[leader_A])
    {
        par[leader_B] = leader_A;
    }
    else
    {
        par[leader_A] = leader_B;
        level[leader_A]++;
    }
}

int main()
{
    dsu_initialize(7);
    dsa_union_by_level(1, 2);
    dsa_union_by_level(2, 3);
    dsa_union_by_level(4, 5);
    dsa_union_by_level(5, 6);
    dsa_union_by_level(1, 4);
    cout << find(1) << endl;
    cout << find(4) << endl;
    return 0;
}