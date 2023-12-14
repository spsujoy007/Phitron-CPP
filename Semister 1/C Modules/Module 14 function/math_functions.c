#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double a = 3.5;
    // int sum = ceil(a); // if 3.50 ans = 4
    int sum = floor(a); //if 3.50 ans = 3
    // int sum = round(a); //if 3.50 ans = 3
    printf("%d", sum);

    // double x=25;
    // double sum = sqrt(x); //rootover
    // printf("%0.2lf", sum);

    // int a= 2, b=3;
    // int sum = pow(2, 3); // we can get it by int and float also 
    // printf("%d", sum);

    // int x = -55;
    // int sum = abs(x); // absolute value; Ex: -50 | output: 50
    // printf("%d", sum);

    return 0;
}