#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0;i <n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int counts[10] = {0};

    for(int i = 0;i <n; i++)
    {
        int val = ar[i];
        counts[val] = counts[val]+1;
    }
    for(int i = 0; i < 10;i++)
    {
        printf("%d - %d\n", i, counts[i]);

    }
    return 0;
}