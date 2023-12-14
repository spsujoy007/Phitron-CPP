#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max=arr[0], min=arr[0];
    int maxidx=0, minidx=0;
    for(int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            maxidx = i;
        }
        if(min > arr[i])
        {
            min = arr[i];
            minidx = i;
        }
    }
    arr[maxidx] = min;
    arr[minidx] = max;

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}