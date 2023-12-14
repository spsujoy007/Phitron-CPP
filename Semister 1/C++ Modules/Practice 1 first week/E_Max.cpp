#include <bits/stdc++.h>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int mx = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(mx < ar[i])
        {
            mx = max(ar[i], mx);
        }
    }
    cout << mx;
      
    return 0;
}