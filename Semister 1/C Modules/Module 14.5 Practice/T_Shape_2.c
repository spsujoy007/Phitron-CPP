#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", ar[i]);
    }
    int k=1, s= n-1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < k; j++)
        {
            printf("*");
        }
        s--;
        k+=2;
        printf("\n");
    }
    return 0;
}