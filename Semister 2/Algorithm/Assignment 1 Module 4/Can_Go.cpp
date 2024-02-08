#include <bits/stdc++.h>
using namespace std;
int N, M;
const int n = 1005;
char mat[n][n];
bool vis[n][n];

bool visited(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
        return false;
    return true;
}

void bfs(int sci, int scj)
{
    vector<pair<int, int>> control = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
    queue<pair<int, int>> p;
    p.push({sci, scj});
    vis[sci][scj] = true;
    while (!p.empty())
    {
        pair<int, int> par = p.front();
        p.pop();
        int a = par.first, b = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + control[i].first;
            int cj = b + control[i].second;
            if (visited(ci, cj) && !vis[ci][cj] && mat[ci][cj] != '#')
            {
                p.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}
int main()
{
    pair<int, int> s, tgo;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'A')
                s = {i, j};
            if (mat[i][j] == 'B')
                tgo = {i, j};
        }
    }
    memset(vis, false, sizeof(vis));

    int srci = s.first;
    int srcj = s.second;
    bfs(srci, srcj);
    if (vis[tgo.first][tgo.second])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}