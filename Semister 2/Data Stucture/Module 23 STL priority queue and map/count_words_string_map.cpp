#include <bits/stdc++.h>
using namespace std;

int main()
{
    // count anything with map
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);
    string word;
    map<string, int> mp;
    while (ss >> word)
    {
        // cout << word << endl;
        mp[word]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    };

    return 0;
}