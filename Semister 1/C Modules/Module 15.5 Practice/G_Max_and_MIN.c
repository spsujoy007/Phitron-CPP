#include <stdio.h>

void maxmin(int ar[], int n)
{
    int max, min;
        max=ar[0];
        min=ar[0];
    for(int i = 0; i < n; i++)
    {
        if(min > ar[i])
        {
            min=ar[i];
        }
        if(max < ar[i])
        {
            max = ar[i];
        }
    }
    printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if(arr[1] >= 0)
    {
        maxmin(arr, n);
    }
    return 0;
}

