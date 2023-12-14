#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int t = 0; t < n; t++)
    {
        long long int a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        long long int multiple = b*c*d;
        long long int missing = a / multiple;
        if(multiple*missing == a)
        {
            printf("%lld", missing);
        }
        else{
            printf("-1");
        }
        printf("\n");
    }

    return 0;
}
