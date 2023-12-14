#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], arr2[n];
    for(int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++)
    {
        if(arr[i] > 0){
            arr2[i] = 1;
        }
        else if (arr[i] == 0){
            arr2[i]= 0;
        }
        else{
            arr2[i] = 2;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}