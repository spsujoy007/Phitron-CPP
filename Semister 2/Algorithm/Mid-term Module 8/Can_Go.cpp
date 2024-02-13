#include <bits/stdc++.h>
#define lli long long int
using namespace std;

const int N = 1e5 + 5;
vector<pair<lli, lli>> v[N];
lli dis[N];

class cmp
{
public:
    bool operator()(pair<lli, lli> a, pair<lli, lli> b)
    {
        return a.second > b.second;
    }
};

void dijsktra_method(int src)
{
    priority_queue<pair<lli, lli>, vector<pair<lli, lli>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        lli pNode = parent.first;
        lli pCost = parent.second;
        for (pair<int, int> child : v[pNode])
        {
            lli childNode = child.first;
            lli childCose = child.second;
            if (dis[childNode] > pCost + childCose)
            {
                dis[childNode] = pCost + childCose;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    lli n, e;
    cin >> n >> e;

    while (e--)
    {
        lli a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    lli src;
    cin >> src;
    dijsktra_method(src);

    lli q;
    cin >> q;
    while (q--)
    {
        lli d, dw;
        cin >> d >> dw;
        if (dis[d] <= dw)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}