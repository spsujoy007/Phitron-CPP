// solved
#include <bits/stdc++.h>
using namespace std;

class Player
{
public:
    string name;
    int no;
    Player(string name, int no)
    {
        this->name = name;
        this->no = no;
    }
};

class cmp
{
public:
    bool operator()(Player a, Player b)
    {
        if (a.name > b.name)
        {
            return true;
        }
        else if (a.name == b.name)
        {
            if (a.no < b.no)
            {
                return true;
            }
        }
        return false;
    };
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Player, vector<Player>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int no;
        cin >> name >> no;
        Player playerObj(name, no);
        pq.push(playerObj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().no << endl;
        pq.pop();
    }
    return 0;
}