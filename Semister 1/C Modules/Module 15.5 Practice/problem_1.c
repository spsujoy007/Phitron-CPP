#include <stdio.h>
void my_abs(int n)
{
    if(n >= 0)
    {
        printf("%d", n);
    }
    else{
        printf("%d", -n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    my_abs(n);
    return 0;
}