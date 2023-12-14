#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> S;
    string getword;
    cin >> getword;
    S.push_back(getword);
    int ar[26] = {0};
    for (char a : S[0])
    {
        ar[a - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (ar[i] != 0)
        {
            char c = i + 'a';
            cout << c << " : " << ar[i] << endl;
        }
    }
    return 0;
}