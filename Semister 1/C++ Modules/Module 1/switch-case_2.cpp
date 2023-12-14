#include <iostream>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    int x = 1;
    switch (x%2)
    {
    case 0:
        cout << "Even";
        break;
    case 1:
        cout << "Odd";
        break;
    
    default:
        break;
    }
}