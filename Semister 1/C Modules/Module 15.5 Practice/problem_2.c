#include <stdio.h>

void my_len(char text[])
{
    int len = 0;
    for(int i = 0; i < 100; i++)
    {
        if(text[i] > 0)
        {
            len++;
        }
        else{
            break;
        }
    }
    printf("%d", len);
}

int main()
{
    char text[100];
    scanf("%s", text);
    my_len(text);
    return 0;
}