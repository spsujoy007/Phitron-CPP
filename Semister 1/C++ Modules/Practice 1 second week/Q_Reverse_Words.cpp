#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w;
    getline(cin, w);

    stringstream ss(w);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        cnt++;
        reverse(word.begin(), word.end());

        if (cnt > 1)
        {
            cout << " ";
        }
        cout << word;
    }
    return 0;
}