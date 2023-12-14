#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int t=0; t < n; t++)
    {
        int round;
        scanf("%d", &round);
        char fight[100001];
        scanf("%s", fight);
        int tiger_score=0, pathan_score=0;
        for(int i = 0; i < round; i++)
        {
            if(fight[i] == 'T' && fight[i] == 'P')
            {
                tiger_score++;
                pathan_score++;
            }
            else if(fight[i] == 'P')
            {
                pathan_score++;
            }
            else{
                tiger_score++;
            }
        }
        if(tiger_score == pathan_score)
        {
            printf("Draw");
        }
        else if(tiger_score < pathan_score)
        {
            printf("Pathaan");
        }
        else{
            printf("Tiger");
        }
        printf("\n");
    }

    return 0;
}