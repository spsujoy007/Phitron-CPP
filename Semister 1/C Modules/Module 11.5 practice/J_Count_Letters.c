#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000001];
    scanf("%s", s);
    int count[26] = {0};
    for(int i = 0; i < strlen(s); i++)
    {
        int val = s[i]-'a';
        if(s[i] >= 'a' && 'z' >= s[i])
        {
            count[val]++;
        }
    }
    for(int i =0;i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("%c : %d\n", i+'a', count[i]);
        }
    }
 
    return 0;
}