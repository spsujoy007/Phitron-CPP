#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char text[101];
    int tx_len;
    getchar();
    for(int i = 0; i < n; i++)
    {
        fgets(text, 101, stdin);
        tx_len = strlen(text);
        if(tx_len <= 11)
        {
            printf("%s", text);
        }
        else{
            for(int g = 0; g < tx_len; g++)
            {
                if(text[tx_len-1] == '\n')
                {
                        printf("%c%d%c\n", text[0], tx_len-3, text[tx_len-2]);
                break;
                }
                else{
                    printf("%c%d%c\n", text[0], tx_len-2, text[tx_len-1]);
                break;
                }
            }
        }
    }
    return 0;
}