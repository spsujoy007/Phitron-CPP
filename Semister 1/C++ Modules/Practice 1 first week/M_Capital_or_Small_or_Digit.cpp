#include <iostream>
using namespace std;

int main()
{
    // welcome to the program sp, let's do some hack;
    char c;
    cin >> c;
    if(c >= 65 && c <= 122)
    {
        cout << "ALPHA" <<endl;
        if(c >= 65 && c <=90)
        {
            cout <<"IS CAPITAL"<<endl;
        }
        else{
            cout <<"IS SMALL"<<endl;
        }
    }
    else{
        cout << "IS DIGIT";
    }
      
    return 0;
}