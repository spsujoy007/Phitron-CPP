#include <stdio.h>
int main()
{
    int d;
    scanf("%d", &d);
    int n;
    int even=0, odd=0, Positive=0, Negative=0;
    for(int i = 0; i < d; i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
        if(n > 0){
            Positive++;
        }
        else if(n <0){
            Negative++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, Positive, Negative);

    return 0;
}