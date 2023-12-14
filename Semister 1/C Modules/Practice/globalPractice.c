#include <stdio.h>
int main()
{
    // char a;
    // scanf("%c", &a);
    // int num = a;
    // if( num >= 'a' && num <= 'z' || num >= 'A' && num <= 'Z'){
    //     if(num >= 65 && num <= 90){
    //     int con = num+32;
    //     printf("%c", con);
    // }
    // else{
    //     int con = num-32;
    //     printf("%c", con);
    // }
    // }
    // else{
    //     printf("Not a char!\n");
    // }

    // int n;
    // scanf("%d", &n);
    // int ans = n/1000;
    // if(ans % 2 == 0){
    //     printf("EVEN");
    // }
    // else{
    //     printf("ODD");
    // }
    
    // char x;
    // scanf("%c", &x);
    // if(x >= '0' && x <= '9'){
    //         printf("IS DIGIT");
    // }
    // else{
    //     printf("ALPHA\n");
    //     if(x >= 'a' && x <= 'z'){
    //         printf("IS SMALL\n");
    //     }
    //     else{
    //         printf("IS CAPITAL\n");
    //     }
    // }
    
    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // if(a <= b && a <= c){
    //         printf("%d ", a);
    //     }
    //     else if(b <= a && b <= c){
    //         printf("%d ", b);
    //     }
    //     else{
    //         printf("%d ", c);
    // }
    // if(a >= b && a >= c){
    //     printf("%d", a);
    // }
    // else if(b >= a && b >= c){
    //     printf("%d", b);
    // }
    // else{
    //     printf("%d", c);
    // }
    
    // int i = 10;
    // int x = ++i;
    // printf("\tx-%d i-%d",x, i);

    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        if(i == 1){
            printf("-1");
        }
    }

    return 0;
}