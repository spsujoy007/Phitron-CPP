#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];

void print_nodes(int x)
{
    vector<int> sv;
    if (v[x].empty())
    {
        sv.push_back(-1);
    }
    else
    {
        for (auto node : v[x])
        {
            if (node || node == 0)
                sv.push_back(node);
        }
    }
    sort(sv.begin(), sv.end(), greater<int>());

    for (int child : sv)
    {
        cout << child << " ";
    }
    cout << endl;
}

int main()
{
    int N, E;
    cin >> N >> E;

    while (E--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        print_nodes(x);
    }
    return 0;
}