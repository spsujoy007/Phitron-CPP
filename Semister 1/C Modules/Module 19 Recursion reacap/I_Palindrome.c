#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int k=strlen(s)-1, flag=1;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] != s[k]){
            flag=0;
            break;
        }
        k--;
    }
    if(flag == 1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}