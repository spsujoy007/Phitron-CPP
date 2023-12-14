#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n > 0){
        for(int i = 1; i <=n; i++)
        {
            printf("%d ", i);
        }
    }
    else if(n < 0) {
        for(int d = n; d <= 0; d++)
        {
            printf("%d ", d);
        }
    }
    return 0;
}