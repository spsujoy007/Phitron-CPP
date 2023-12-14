#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k= 1, s=n-1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for(int j = k; j > 0; j--)
        {
            printf("%d", j);
        }
        k++;
        s--;
        printf("\n");
    }
    return 0;
}