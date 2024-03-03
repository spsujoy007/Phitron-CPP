#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int ans = INT_MIN;
        int idk1 = 0, idk2 = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (min(ar[i], ar[j]) > ans)
            {
                ans = min(ar[i], ar[j]);
                idk1 = i;
                idk2 = j;
            }
            if (ar[i] < ar[j])
                i++;
            else
                j--;
        }
        cout << idk1 << " " << idk2 << endl;
    }
    return 0;
}