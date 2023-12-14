#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(ar[i] < ar[j])
            {
                int x = ar[i];
                ar[i] = ar[j];
                ar[j] = x;
            }
            // printf("%d %d\n", ar[i], ar[j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}