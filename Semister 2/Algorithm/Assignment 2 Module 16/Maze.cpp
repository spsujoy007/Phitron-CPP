#include <bits/stdc++.h>
#define ll long long int
#define pr pair<ll, ll>
using namespace std;

int n, m;
const int N = 1e3 + 5;
char land[N][N];
bool vis[N][N];
pr way[N][N];
vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool checkValid(int sf, int ss)
{
    return land[sf][ss] != '#' && (sf >= 0 && sf < n && ss >= 0 && ss < m);
}

void bfs(int src_first, int src_second)
{
    queue<pr> q;
    q.push({src_first, src_second});

    while (!q.empty())
    {
        int par_1 = q.front().first;
        int par_2 = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int child_1 = par_1 + direction[i].first;
            int child_2 = par_2 + direction[i].second;

            if (checkValid(child_1, child_2) && !vis[child_1][child_2])
            {
                vis[child_1][child_2] = true;
                way[child_1][child_2] = {direction[i].first,
                                         direction[i].second};
                q.push({child_1, child_2});
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    pr src, des;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> land[i][j];
            if (land[i][j] == 'R')
                src.first = i, src.second = j;
            if (land[i][j] == 'D')
                des.first = i, des.second = j;
        }
    }

    memset(vis, false, sizeof(vis));

    bfs(src.first, src.second);

    pr currentDes = des;
    vector<pr> replace;
    if (vis[des.first][des.second])
    {
        while (des.first != src.first || des.second != src.second)
        {
            land[des.first][des.second] = 'X';
            replace.push_back({way[des.first][des.second]});
            des.first = des.first - replace.back().first;
            des.second = des.second - replace.back().second;
        }
        land[src.first][src.second] = 'R';
        land[currentDes.first][currentDes.second] = 'D';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << land[i][j];
        }
        cout << endl;
    }

    return 0;
}