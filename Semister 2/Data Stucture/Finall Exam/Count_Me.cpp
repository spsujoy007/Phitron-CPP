#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // while (n--)
    // {
    // }
    string line;
    getline(cin, line);
    string word;
    stringstream ss(line);
    map<string, int> mp;
    while (ss >> word)
    {
        // mp[word]++;
        cout << word << ", ";
    }
    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    return 0;
}