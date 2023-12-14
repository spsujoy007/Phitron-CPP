#include <stdio.h>

int addition(int a, int b){
    int total = a+b;
    return total;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = addition(a, b);
    printf("%d", result);
    return 0;
}