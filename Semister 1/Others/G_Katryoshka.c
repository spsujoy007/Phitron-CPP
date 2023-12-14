#include <stdio.h>
int main()
{
    long long int e, m, b, res = 0;
    scanf("%lld %lld %lld", &e, &m, &b);
    if(e == 0 && b == 0){
        printf("0");
    }
    else{
        long long int mn = e;
        // get the smallest number for minimum murti 
        if(m < mn){
            mn = m;
        }
        else if(b < mn){
            mn = m;
        }
        res = res+mn;

        // minus the minimum value;
        e-=mn;
        m-=mn;
        b-=mn;

        if(e/2 < b){
            res+=e/2;
        }
        else{
            res+=b;
        }

    }
    printf("%lld", res);
    return 0;
}