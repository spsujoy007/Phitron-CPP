#include <stdio.h>

int sum(int a, int b)
{
    int total = a+b;
    return total;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int total = sum(a, b);
    printf("%d", total);
    return 0;
}