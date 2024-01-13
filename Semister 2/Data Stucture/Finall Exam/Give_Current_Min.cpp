#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int input;
        cin >> input;
        if (input == 0)
        {
            int x;
            cin >> x;
            s.insert(x);
            if (!s.empty()) // print
                cout << *s.begin() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (input == 1)
        {
            if (!s.empty()) // print
                cout << *s.begin() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (input == 2)
        {
            if (!s.empty())
            {
                s.erase(*s.begin());
                if (!s.empty()) // print
                    cout << *s.begin() << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
        else
            cout << "Empty" << endl;
    }

    return 0;
}