#include <stdio.h>
#include <string.h>
int main()
{
    // #strcpy() *************
    char a[100], b[100];
    fgets(a, 100, stdin);
    fgets(b, 100, stdin);
    
    // for(int i = 0; i < strlen(b); i++)
    // {
    //     a[i] = b[i];
    // }

    strcpy(a, b); // for without the loop;

    printf("changed a:%s", a);
    // printf("%s", b);
    return 0;
}