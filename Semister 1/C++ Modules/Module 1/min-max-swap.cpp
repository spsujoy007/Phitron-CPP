#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
void swap_now(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main()
{
    // welcome to the program sp, let's do some hack;
    int a= 18, b=15, c= 20, d=55;
    // int f = min({a, b, c, d});
    // int e = max({a, b, c, d});
    // swap_now(&a, &b);
    swap(a, b);
    cout << a <<" " <<b;
}