#include <stdio.h>

int count_before_one(int ar[], int n)
{
    // printf("%d",ar[0]);
    int s=0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] == 1)
        {
            break;
        }
        else{
            s++;
        }
    }
     return s;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int sum = count_before_one(ar, n);
    printf("%d", sum);
    return 0;
}