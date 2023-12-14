#include <stdio.h>
int main()
{
    long long int e, m, b, murti=0;
    scanf("%lld %lld %lld", &e, &m, &b);
    if(e == 0 || m == 0){
        printf("0");
    }
    else{
        long long int min = e;
        if(m < min){
            min = m;
        }
        else if(b < min){
            min = b;
        }
        murti = murti + min;

        e-=min;
        m-=min;
        b-=min;

        if(e/2 < b)
        {
            murti+=e/2;
        }
        else{
            murti+=b;
        }
        printf("%lld", murti);
    }
    return 0;
}