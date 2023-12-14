#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    long long int count=0;
    for(int i = 0; i < m; i++)
    {
        if(n > m)
        {
            count=1;
        }
        if(ar[i] < 0){
            count=0;
            break;
        }
        else{
            count = count+ar[i];
        }

    }
    printf("%lld", count);

    return 0;
}