#include <bits/stdc++.h>
using namespace std;
// header closed...

const int N = 1005;
char way[N][N];
bool vis[N][N];
int n, m;

vector<pair<int, int>> command = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};

bool check_valid(int i, int j)
{
    return (i < 0 || i >= n || j < 0 || j >= m);
}

void dfs(int sri, int srj)
{
    vis[sri][srj] = true;
    for (int i = 0; i < 4; i++)
    {
        int child_i = sri + command[i].first;
        int child_j = srj + command[i].second;
        if (check_valid(child_i, child_j) == false && !vis[child_i][child_j] && way[child_i][child_j] == '.')
        {
            dfs(child_i, child_j);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> way[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    int t_apart = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == false && way[i][j] == '.')
            {
                dfs(i, j);
                t_apart++;
            }
        }
    }

    cout << t_apart << endl;

    return 0;
}