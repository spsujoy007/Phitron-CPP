#include <stdio.h>

int main() 
{
  //Days to year and month checker
    // int n;
    // scanf("%d", &n);
    // int year = n/365;
    // int days = n%365;
    // printf("%d year and %d days", year, days);

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a+b-c == d){
        printf("YES 0");
    }
    else if(a-b+c == d){
        printf("YES 1");
    }
    else if(a+b*c == d){
        printf("YES 2");
    }
    else if(a-b*c == d){
        printf("YES 3");
    }
    else if(a*b+c == d){
        printf("YES 4");
    }
    else if(a*b-c == d){
        printf("YES 5");
    }
    else{
        printf("NO");
    }
    return 0;
}