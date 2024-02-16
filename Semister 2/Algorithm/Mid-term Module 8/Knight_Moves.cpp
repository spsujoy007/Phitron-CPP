#include <bits/stdc++.h>
using namespace std;

const int n = 100;
int road[n][n];
bool vis[n][n];
int level[n][n];

int N, M;
vector<pair<int, int>> direction = {{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};
bool check_valid(int i, int j)
{
    return !(i < 0 || i >= N || j < 0 || j >= M);
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int parent_i = parent.first;
        int parent_j = parent.second;

        for (int i = 0; i < 8; i++)
        {
            int child_i = parent_i + direction[i].first;
            int child_j = parent_j + direction[i].second;

            if (check_valid(child_i, child_j) && !vis[child_i][child_j])
            {
                vis[child_i][child_j] = true;
                level[child_i][child_j] = level[parent_i][parent_j] + 1;
                q.push({child_i, child_j});
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ki, kj;
        cin >> N >> M;
        cin >> ki >> kj;

        int qi, qj;
        cin >> qi >> qj;

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(ki, kj);

        cout << level[qi][qj] << endl;
    }

    return 0;
}