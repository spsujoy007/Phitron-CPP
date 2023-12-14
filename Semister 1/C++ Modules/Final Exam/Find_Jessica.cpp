#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    stringstream ss(text);
    string word;
    int flag = 0;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}