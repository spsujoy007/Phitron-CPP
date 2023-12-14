#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    scanf("%s", s);

    int count[26]={0};
    for(int i = 0; i < strlen(s); i++)
    {
        int val = s[i]-'a';
        count[val]++;
        // printf("%d ", val);
    }
    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("%c - %d\n" , i+'a', count[i]);
        }

    }

    // printf("%s", s);
    return 0;
}