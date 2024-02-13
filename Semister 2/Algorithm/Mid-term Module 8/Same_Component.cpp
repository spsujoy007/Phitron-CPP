#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
char blocks[N][N];
bool is_vis[N][N];
int n, e;
int si, sj;
int di, dj;

vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool is_valid(int si, int sj)
{
    return (si < 0 || si >= n || sj < 0 || sj >= e);
}
void dfs(int srci, int srcj)
{
    is_vis[srci][srcj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = srci + direction[i].first;
        int cj = srcj + direction[i].second;
        if (is_valid(ci, cj) == false && is_vis[ci][cj] == false && blocks[ci][cj] == '.')
        {
            int a = ci, b = cj;
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cin >> blocks[i][j];
        }
    }
    cin >> si >> sj;
    cin >> di >> dj;

    dfs(si, sj);

    bool ans = true;
    if (is_vis[si][sj] && is_vis[di][dj])
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}