#include <stdio.h>

int main()
{
    float a, b, sum;
    char todo;
    while(a)
    {
        scanf("%f%c%f", &a, &todo, &b);
    switch (todo)
    {
    case '+':
        sum = a+b;
        break;
    case '-':
        sum = a-b;
        break;
    case '*':
        sum = a*b;
        break;
    case '/':
        sum = a/b;
        break;
    
    default:
        sum=0;
    }
    printf("Ans: %0.1f\n", sum);
    }
}