#include <stdio.h>
int main()
{
    int n, sumP=0, sumN=0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i <n; i++)
    {
        if(arr[i] >= 0){
            sumP=  sumP+arr[i];
        }
        else{
            sumN=  sumN+arr[i];
        }
    }
    printf("%d %d", sumP, sumN);

    return 0;
}