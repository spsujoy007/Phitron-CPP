#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 80, 10, 30, 10, 10, 40, 50};
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    // myList.reverse();
    cout << *next(myList.begin(), 3);

    // for (auto val : myList)
    // {
    //     cout << val << " | ";
    // }
    return 0;
}