#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cout << s[i] - 32;
            }
            else
            {
                cout << s[i] + 32;
            }
        }
        else
        {

            cout << s[i];
        }
    }

    return 0;
}