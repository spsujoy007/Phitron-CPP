#include <bits/stdc++.h>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    int a, b, c;
    char x, s;
    cin >> a >> x >> b >> s >> c;
    // cout << a << x << b << s << c;
    int result = 1, ans = 0;
    if (x == '+')
    {
        if (a + b != c)
        {
            result = 0;
        }
        ans = a + b;
    }
    else if (x == '-')
    {
        if (a - b != c)
        {
            result = 0;
        }
        ans = a - b;
    }
    else if (x == '*')
    {
        if (a * b != c)
        {
            result = 0;
        }
        ans = a * b;
    }
    if (result == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << ans;
    }
    return 0;
}