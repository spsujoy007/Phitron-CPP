#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        print(ss);
        cout << word << endl;
    }
}

int main()
{
    // welcome to the program sp, let's do some hack;
    string text = "Hello my name is sujoy";
    stringstream ss(text);
    print(ss);
    return 0;
}