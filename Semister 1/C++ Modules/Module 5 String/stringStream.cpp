#include <bits/stdc++.h>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    string intro = "Fair and lovely";
    stringstream ss(intro);
    // ss << intro;
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        // cout << word << endl;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}