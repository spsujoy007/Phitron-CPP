#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);
    int chck = strcmp(a, b);
    if(chck < 0)
    {
        printf("%s", a);
    }
    else{
        printf("%s", b);
    }
    return 0;
}