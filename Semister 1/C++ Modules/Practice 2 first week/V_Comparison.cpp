#include <bits/stdc++.h>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    int a, b;
    char c;
    cin >> a >> c >> b;
    int result = 0;
    if (c == '>')
    {
        if (a > b)
        {
            result = 1;
        }
        else
        {
            result = 2;
        }
    }
    else if (c == '<')
    {
        if (a < b)
        {
            result = 1;
        }
        else
        {
            result = 2;
        }
    }
    else
    {
        if (a == b)
        {
            result = 1;
        }
        else
        {
            result = 2;
        }
    }

    if (result == 1)
    {
        cout << "Right";
    }
    else if (result = 0)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Wrong";
    }
    return 0;
}