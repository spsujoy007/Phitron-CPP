#include <stdio.h>
// int fun()
// {
//     int x = 300;
//     int *p = &x;
//     return *p;
// }
int main()
{
    int x=100;
    int * p = &x;
    printf("%p\n", p);
    printf("%d\n", *p);
    *p = 500;
    printf("%d\n", *p);

    // printf("%d", fun());
    return 0;
}