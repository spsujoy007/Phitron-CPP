#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int ts = 0; ts < n; ts++)
    {
        string t, x;
        cin >> t >> x;
        while (t.find(x) != -1)
        {
            t.replace(t.find(x), x.size(), "#");
        }
        cout << t << endl;
    }

    return 0;
}