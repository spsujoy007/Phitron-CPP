#include <stdio.h>
#include <string.h>
int main()
{
    // #strcat() *************
    char a[200], b[100];
    scanf("%s %s", a, b);
    strcat(a, b);

    printf("changed a:%s", a);
    return 0;
}