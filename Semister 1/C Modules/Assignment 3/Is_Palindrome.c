#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) 
{
    int n =strlen(s)-1, check=1;
    for(int i = 0; i < n;i++)
    {
        if(s[i] != s[n])
        {
            check=0;
        }
        n--;
    }
    return check;
}
int main()
{
    char text[1001];
    scanf("%s", &text);
    int result = is_palindrome(text);
    if(result == 1)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}