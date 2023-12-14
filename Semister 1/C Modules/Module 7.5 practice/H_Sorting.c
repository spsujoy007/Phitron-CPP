#include <stdio.h>
int main()
{
    int n, check=0;
    scanf("%d", &n);
    int arr[n], sorting[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        check = arr[0];
        if(check < arr[i])
        {
            sorting[i] = arr[i];
        }
        printf("%d", sorting[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d", sorting[i]);
    }
    return 0;
}