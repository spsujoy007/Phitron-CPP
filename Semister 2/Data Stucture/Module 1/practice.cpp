#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    int ar[text.size() - 1];
    for (int i = 0; i < text.size(); i++)
    {
        ar[i] = text[i];
    }
    for (int i = 0; i < text.size(); i++)
    {
        char c = ar[i];
        cout << c;
    }

    return 0;
}