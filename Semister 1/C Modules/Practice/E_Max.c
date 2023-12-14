#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, max = 0, min=INT_MAX;
    for(int i = 1; i <=n; i++){
        scanf("%d", &a);
        if(max < a){
            max = a;
        }
        if(min > a){
            min = a;
        }
    }
    printf("%d %d", max, min);

    return 0;
}