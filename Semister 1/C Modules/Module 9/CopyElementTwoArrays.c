#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    int arr2[m];
    for(int i = 0;i<m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int p = n+m;
    int arr3[p];

    for(int i = 0; i < n; i++)
    {
        arr3[i] = arr[i];
    }

    int i = n;
    for(int j = 0; j < m; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }

    for(int i = 0;i <p; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}