#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        long long int a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        long long int multnum = a/(b*c*d);
        if(a == (b*c*d*multnum))
        {
            printf("%lld\n", multnum);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}