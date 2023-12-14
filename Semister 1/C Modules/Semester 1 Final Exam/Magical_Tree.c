#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int target= ((n-1)/2)+6;

    int k = 1, s=target-1;
    for(int i = 0; i < target; i++)
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

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}