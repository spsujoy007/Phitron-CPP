#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    scanf("%s", a);
    for(int i = 0; i < strlen(a); i++)
    {
            if(a[i] == ',')
            {
                printf(" ");
                continue;
            }
            if(a[i] >= 97 && 122 >= a[i])
            {
                printf("%c", a[i]-32);
            }
            else{
                printf("%c", a[i]+32);
            }
    }
    return 0;
}