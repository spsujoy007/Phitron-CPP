#include <stdio.h>

int main() 
{
    int a, b, c, big, small;
    printf("Enter value for ABC: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        big = a;
    }
    else if(b > a && b > c){
        big = b;
    }
    else{
        big = c;
    }

    if(a < b && a < c){
        small = a;
    }
    else if(b < a && b < c){
        small = b;
    }
    else{
        small = c;
    }

    printf("\nBig is = %d", big);
    printf("\nSmall is = %d", small);

    return 0;
}