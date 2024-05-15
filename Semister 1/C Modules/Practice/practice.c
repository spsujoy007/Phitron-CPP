#include <stdio.h>
int main()
{
    int num1, num2;
    char todo;
    printf("Calculate: ");
    scanf("%d %c %d", &num1, &todo, &num2);

    int ans;
    if (todo == '+')
        ans = num1 + num2;

    else if (todo == '-')
        ans = num1 - num2;

    else if (todo == '*')
        ans = num1 * num2;

    else if (todo == '/')
        ans = num1 / num2;

    printf("\nAnswer: %d %c %d = %d\n", num1, todo, num2, ans);

    return 0;
}