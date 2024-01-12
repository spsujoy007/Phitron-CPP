#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // max height
    // priority_queue<int, vector<int>, greater<int>> pq; // min height

    int x;
    while (true)
    {
        int v;
        cin >> x;
        if (x == 0)
        {
            cin >> v;
            pq.push(v);
        }
        else if (x == 1)
        {
            pq.pop();
        }
        else if (x == 2)
        {
            cout << pq.top() << endl;
        }
        else if (x == 3)
            break;
    }

    return 0;
}