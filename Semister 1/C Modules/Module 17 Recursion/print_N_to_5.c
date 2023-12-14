#include <stdio.h>

void fun(int a)
{
    if(a==0)return;
    printf("%d\n", a);
    fun(a-1);
}

int main()
{
    fun(10);
    return 0;
}