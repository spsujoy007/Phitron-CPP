#include <bits/stdc++.h>
using namespace std;

int main()
{
    string tx;
    cin >> tx;
    int frq[26] = {0};
    for (char c : tx)
    {
        frq[c - 'a']++;
    }
    sort(frq, frq + 26);
    for (char i = 'z'; i >= 'a'; i--)
    {
        // cout << i << " " << frq[i - 'a'] << endl;
        for (int j = 0; j < frq[i - 'a']; j++)
        {
            cout << i;
        }
    }

    return 0;
}