#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        long long int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2)
        {
            myList.erase(next(myList.begin(), v));
        }
        cout << endl;
        cout << "L -> ";
        for (auto v : myList)
        {
            cout << v << " ";
        }
        cout << endl;
        cout << "R -> ";
        myList.reverse();
        for (auto v : myList)
        {
            cout << v << " ";
        }
    }

    return 0;
}