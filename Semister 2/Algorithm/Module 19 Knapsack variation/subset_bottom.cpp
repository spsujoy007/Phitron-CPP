#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, w;
    cin >> n >> w;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool dp[n + 1][w + 1];
    dp[0][0] = true;
    for (int i = 1; i <= w; i++)
    {
        dp[0][i] = false;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (a[i - 1] <= j)
            {
                bool optn1 = dp[i - 1][j - a[i - 1]];
                bool optn2 = dp[i - 1][j];
                dp[i][j] = optn1 || optn2;
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    /* if (dp[n][w])
        cout << "YES" << endl;
    else
        cout << "NO" << endl; */
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (dp[i][j])
                cout << "T ";
            else
                cout << "F ";
        }
        cout << endl;
    }
    return 0;
}