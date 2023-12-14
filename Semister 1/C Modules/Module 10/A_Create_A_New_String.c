#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s %s", s, t);
    int s1=strlen(s), s2=strlen(t);
    printf("%d %d", s1, s2);
    printf("\n%s %s",  s, t);
    return 0;
}