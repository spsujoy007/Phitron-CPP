#include <stdio.h>

void fun(int n)
{
    if(n == 0) return;
    if(n == 1)
    {
        printf("%d", n);
    }
    else{
        printf("%d", n);
        printf(" ");
    }
    fun(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}