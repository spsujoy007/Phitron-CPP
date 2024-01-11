#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> line;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string name;
            cin >> name;
            line.push(name);
        }
        else if (x == 1)
        {
            if (line.size() > 0)
            {
                cout << line.front() << endl;
                line.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}