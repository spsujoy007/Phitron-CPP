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
    int cnt2=0, cnt3=0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] % 2 == 0)
        {
            cnt2+=1;
        }
        else if(ar[i] % 3 == 0 && ar[i] % 2 == 0)
        {
            cnt2+=1;
        }
        if(ar[i] % 3 == 0 && ar[i] % 2 != 0)
        {
            cnt3+=1;
        }
    }
    printf("%d %d", cnt2, cnt3);
    return 0;
}