#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string c;
        cin >> c;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, (c[i] - 'a') + 1);
        }
        cout << ans << endl;
    }

    return 0;
}