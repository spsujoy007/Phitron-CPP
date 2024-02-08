#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<pair<int, int>> v[N];
int dis[N];

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijsktra(int s)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({s, 0});
    dis[s] = 0;

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;

        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (childCost + cost < dis[childNode])
            {
                dis[childNode] = childCost + cost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    // memset(dis, INT_MAX, sizeof(dis));
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dijsktra(0);

    for (int i = 0; i < n; i++)
        cout << i << " -> " << dis[i] << endl;

    return 0;
}