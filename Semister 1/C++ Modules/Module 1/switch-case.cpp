#include <iostream>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    int a = 17;
    switch (a)
    {
    case 18:
        printf("You are adult");
        break;
    case 17:
        printf("You are a baby!");
        break;
    default:
        printf("Enter correct number");
        break;
    }
}