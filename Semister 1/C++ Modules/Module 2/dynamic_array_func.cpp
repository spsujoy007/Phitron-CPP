#include <bits/stdc++.h>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    int *a = new int[3]; // 10 20 30
    int *b = new int[3]; // 10 20 30 40 50
    for(int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a; // delete a for delete first one, and delete[] a for delete the full array
    a = new int[5];
    for(int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }

    delete[] b;
    a[3]= 40;
    a[4]= 50;
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] <<" ";
    }
}