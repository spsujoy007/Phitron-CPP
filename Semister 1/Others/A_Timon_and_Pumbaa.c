#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int d = a-b;
    if(d >= 0){
        printf("%d", d);
    }
    
    else{
        printf("0");
    }
    return 0;
}