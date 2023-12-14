#include <bits/stdc++.h>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    int a,b,c;
    cin >> a >> b >> c;
    int max=a, min=0;
    if(a >= b && a >=c)
    {
        max=a;
    }
    else if(b >= a && b >=c)
    {
        max=b;
    }
    else{
        max=c;
    }

    if(a <= b && a <= c)
    {
        min=a;
    }
    else if(b <= a && b <=c)
    {
        min=b;
    }
    else{
        min=c;
    }
    cout << min<< " " <<max;
    return 0;
}