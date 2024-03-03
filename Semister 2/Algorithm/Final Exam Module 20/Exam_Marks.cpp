#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        s = 1000 - s;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool dp[n + 1][s + 1];
        dp[0][0] = true;

        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (a[i - 1] <= j)
                {
                    int op1 = dp[i - 1][j - a[i - 1]];
                    int op2 = dp[i - 1][j];
                    dp[i][j] = op1 || op2;
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        if (dp[n][s])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}