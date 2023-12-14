#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k=n-1, s=1;
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
        k= k-2;
        s++;
        printf("\n");
    }
    return 0;
}