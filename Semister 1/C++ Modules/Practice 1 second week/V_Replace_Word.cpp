#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    getline(cin, t);

    int g = -1;
    while (t.find("s") != -1)
    {
        t.replace(t.find("s"), 1, " ");
    }
    cout << t;

    return 0;
}