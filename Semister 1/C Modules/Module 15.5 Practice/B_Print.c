#include <stdio.h>
void fun(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(i < n)
        {
            printf("%d", i);
            printf(" ");
        }
        else
        {
            printf("%d", i);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}