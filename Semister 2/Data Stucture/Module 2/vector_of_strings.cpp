#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        // string gettext;
        getline(cin, v[i]);
        // v.push_back(gettext);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "* " << v[i] << endl;
    }

    return 0;
}