#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    list<int> myListReverse;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
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
            int size = myList.size();
            if (v < size)
            {
                myList.erase(next(myList.begin(), v));
            }
        }

        cout << "L -> ";
        for (auto v : myList)
        {
            cout << v << " ";
        }
        cout << endl;
        cout << "R -> ";
        myListReverse.assign(myList.begin(), myList.end());
        myListReverse.reverse();
        for (auto v : myListReverse)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}