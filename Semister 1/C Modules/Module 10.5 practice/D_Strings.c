#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", &a, &b);

    int sza = strlen(a);
    int szb = strlen(b);

    printf("%d %d\n", sza, szb);
    char res[100];
    strcpy(res,a);
    strcat(res,b);
    printf("%s\n", res);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);
    return 0;
}