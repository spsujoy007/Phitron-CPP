#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int conso=0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'a')
        {
            continue; 
        }
        else if(s[i] == 'e')
        {
            continue;
        }
        else if(s[i] == 'i')
        {
            continue;
        }
        else if(s[i] == 'o')
        {
            continue;
        }
        else if(s[i] == 'u')
        {
            continue;
        }
        else{
            conso++;
        }
    }
    printf("%d", conso);
    return 0;
}