#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    char text[n];
    scanf("%s", text);
    int total=0;
    for(int i = 0; i < strlen(text); i++)
    {
        total+=text[i]-48;
    }
    printf("%d", total);

    return 0;
}