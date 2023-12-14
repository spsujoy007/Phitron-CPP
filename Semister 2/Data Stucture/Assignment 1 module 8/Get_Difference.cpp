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

void insert_in_tail(Node *&head, Node *&tail, int val)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_in_tail(head, tail, v);
    }
    int min_node = head->val, max_node = head->val;
    for (Node *i = head; i != NULL; i = i->next)
    {
        min_node = min(min_node, i->val);
        max_node = max(max_node, i->val);
    }
    if (min_node <= max_node)
    {
        cout << max_node - min_node << endl;
    }
    else
    {
        cout << max_node - min_node << endl;
    }
    return 0;
}