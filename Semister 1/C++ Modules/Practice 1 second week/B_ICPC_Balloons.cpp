#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    char text[t];
    cin >> text;
    int ar[26] = {0};
    for (int i = 0; i < t; i++)
    {
        int ch = text[i] - 65;
        ar[i] = ch;
    }
    int tx[26] = {0};
    for (int i = 0; i < t; i++)
    {
        // char b = ar[i] + 65;
        if (tx[i] == 0)
        {
            tx[i] = 2;
        }
        else
        {
            tx[i] = tx[i] + 1;
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << tx[i] << ' ';
    }

    return 0;
}