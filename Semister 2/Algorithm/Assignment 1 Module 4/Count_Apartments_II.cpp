#include <bits/stdc++.h>
using namespace std;

const int n = 1006;
int N, M;
char way[n][n];
bool vis[n][n];
vector<pair<int, int>> commands = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};

bool check_valid(int i, int j)
{
    return !(i < 0 || i >= N || j < 0 || j >= M || way[i][j] == '#');
}

int dfs(int srci, int srcj)
{
    int t_rooms = 0;
    vis[srci][srcj] = true;

    for (int i = 0; i < 4; i++)
    {
        int chi = srci + commands[i].first;
        int chj = srcj + commands[i].second;

        if (check_valid(chi, chj) && !vis[chi][chj] && way[chi][chj] == '.')
        {
            t_rooms += dfs(chi, chj);
        }
    }

    return t_rooms + 1;
}

int main()
{
    cin >> N >> M;
    vector<int> apartments;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> way[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (vis[i][j] == false && way[i][j] == '.')
            {
                apartments.push_back(dfs(i, j));
            }
        }
    }

    if (apartments.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(apartments.begin(), apartments.end());

        for (int room : apartments)
        {
            cout << room << " ";
        }

        cout << endl;
    }

    return 0;
}
