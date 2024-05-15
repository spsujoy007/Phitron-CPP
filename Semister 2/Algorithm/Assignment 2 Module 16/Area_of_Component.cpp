#include <bits/stdc++.h>
using namespace std;

int n, m;
const int N = 1e3 + 5;
char land[N][N];
bool vis[N][N];
vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool checkValid(int si, int sj)
{
    return !(si < 0 || si >= n || sj < 0 || sj >= m || land[si][sj] == '-');
}

int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int available = 0;
    for (int i = 0; i < 4; i++)
    {
        int child_si = si + direction[i].first;
        int child_sj = sj + direction[i].second;

        if (checkValid(child_si, child_sj) && !vis[child_si][child_sj] && land[child_si][child_sj] == '.')
        {
            available += dfs(child_si, child_sj);
        }
    }
    return available + 1;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> land[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    int minimum_area = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && land[i][j] == '.')
            {
                int detectLand = dfs(i, j);
                minimum_area = min(minimum_area, detectLand);
            }
        }
    }

    if (minimum_area == INT_MAX)
        cout << -1 << endl;
    else
        cout << minimum_area;

    return 0;
}