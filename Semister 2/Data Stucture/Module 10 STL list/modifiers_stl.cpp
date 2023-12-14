#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10, 20, 30, 40, 30, 50};
    list<int> newList = {100, 200, 300, 400};
    // newList.assign(mylist.begin(), mylist.end());
    // mylist.pop_back();
    // mylist.pop_front();
    // mylist.insert(next(mylist.begin(), 5), newList.begin(), newList.end());
    // mylist.erase(next(mylist.begin(), 2), next(mylist.begin(), 4));
    // replace(mylist.begin(), mylist.end(), 30, 100);

    auto it = find(mylist.begin(), mylist.end(), 100);
    if (it == mylist.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Find";
    }

    // for (auto val : mylist)
    // {
    //     cout << val << " ";
    // }

    return 0;
}