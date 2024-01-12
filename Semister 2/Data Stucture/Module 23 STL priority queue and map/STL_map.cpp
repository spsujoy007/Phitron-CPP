#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp.insert({"Sakib al hasan", 20});
    mp.insert({"Chandu", 100});
    mp.insert({"Obaidul kader", 30});
    mp.insert({"Docker", 40});

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    cout << mp["Chandu"]; // ["Chandu"] is worked like indexes; but in this case this is a key of map elment;

    return 0;
}