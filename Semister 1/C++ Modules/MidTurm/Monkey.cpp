// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // welcome to the program sp, let's do some hack;
//     char a[100001];
//     gets(a);
//     int ar[strlen(a)];

//     for (int i = 0; i < strlen(a) - 1; i++)
//     {
//         for (int j = i + 1; j < strlen(a); j++)
//         {
//             ar[i] = strlen(a[i], a[j]);
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{

    char text[100001];

    while (cin.getline(text, 100001))
    {
        int lenText = strlen(text);
        char cpyText[100001];
        int textIdx = 0;

        for (int i = 0; i < lenText; i++)
        {
            if (text[i] >= 97 && text[i] <= 122)
            {
                cpyText[textIdx++] = text[i];
            }
        }

        sort(cpyText, cpyText + textIdx);

        for (int i = 0; i < textIdx; ++i)
        {
            cout << cpyText[i];
        }

        cout << endl;
    }

    return 0;
}
