#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);
        string word;
        stringstream ss(line);
        map<string, int> mp;
        pair<string, int> p;
        int max = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max)
            {
                max = mp[word];
                p.first = word;
                p.second = mp[word];
            }
        }
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}