#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    cout << p << endl;
};

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    fun(ptr);
    return 0;
}