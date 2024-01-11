#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;

        int count_0 = 0;
        int count_1 = 0;
        for (char c : num)
        {
            if (c == '0')
            {
                if (count_1 > 0)
                {
                    count_1--;
                }
                else
                    count_0++;
            }
            else if (c == '1')
            {
                if (count_0 > 0)
                {
                    count_0--;
                }
                else
                    count_1++;
            }
        }
        if (count_0 <= 0 && count_1 <= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}