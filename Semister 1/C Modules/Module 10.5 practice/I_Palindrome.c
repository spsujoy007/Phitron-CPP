#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);

    int n=strlen(s)-1;
    int check = 1;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] != s[n]){
            check=0;
        }
        n--;
    }
    if(check == 1){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}