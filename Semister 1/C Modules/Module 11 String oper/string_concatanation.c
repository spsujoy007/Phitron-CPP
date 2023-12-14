#include <stdio.h>
#include <string.h>
int main()
{
    char a[200], b[100];
    scanf("%s %s", a, b);
    int c=0;
    for(int i = strlen(a); i < strlen(a)+strlen(b)+1; i++)
    {
        a[i] = b[c];
        c++;
    }
    printf("%s", a);
    return 0;
}