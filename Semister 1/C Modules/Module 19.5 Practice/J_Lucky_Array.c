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
    int min=ar[0], count=0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] < min)
        {
            min = ar[i];
            count=1;
        }
        else if(min == ar[i])
        {
            count++;
        };
    }
    if(count % 2 == 0)
    {
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }
    return 0;
}