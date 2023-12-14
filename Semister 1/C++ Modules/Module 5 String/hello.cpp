#include <bits/stdc++.h>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    string t = "awesome art of a big airport and arioplan";
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == 'a')
        {
            t.erase(i, 1);
        }
        cout << t[i];
    }
    cout << endl;
    return 0;
}