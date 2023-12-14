#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void find_the_node(Node *head, int fnum)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->val == fnum)
        {
            cout << count << endl;
            return;
        }
        temp = temp->next;
        count++;
    }
    cout << -1 << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        while (true)
        {
            int v;
            cin >> v;
            if (v == -1)
                break;
            insert_at_tail(head, tail, v);
        }
        int fnum;
        cin >> fnum;
        find_the_node(head, fnum);

        // for reset head and tail for the next node;
        head = NULL;
        tail = NULL;
    }

    return 0;
}