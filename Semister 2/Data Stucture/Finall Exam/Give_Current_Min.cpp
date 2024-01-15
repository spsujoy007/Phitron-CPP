#include <bits/stdc++.h>
using namespace std;

int main()
{
    // store with priority queue...
    priority_queue<int, vector<int>, greater<int>> pv;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pv.push(x);
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
            pv.push(x);
            if (!pv.empty()) // print
                cout << pv.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (input == 1)
        {
            if (!pv.empty()) // print
                cout << pv.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (input == 2)
        {
            if (!pv.empty())
            {
                pv.pop();
                if (!pv.empty()) // print
                    cout << pv.top() << endl;
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
