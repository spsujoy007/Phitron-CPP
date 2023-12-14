#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    stringstream ss(text);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        int chck = 0;
        for (char c : word)
        {
            if (isalpha(c))
            {
                chck = 1;
                continue;
            }
        }

        if (chck == 1)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}