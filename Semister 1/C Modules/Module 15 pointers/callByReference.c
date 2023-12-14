#include <stdio.h>

void fun(int *x)
{  
    *x = 200;
}

int main()
{
    int x = 20;
    printf("%d\n", x);
    fun(&x);
    printf("%d\n", x);
    return 0;
}