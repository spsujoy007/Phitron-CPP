#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}

void check_palindrom(Node *head, Node *tail)
{
    Node *headtmp = head;
    Node *tailtmp = tail;
    bool flag = true;
    while (headtmp != NULL)
    {
        if (headtmp->val != tailtmp->val)
        {
            flag = false;
            break;
        }
        headtmp = headtmp->next;
        tailtmp = tailtmp->prev;
    }
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    check_palindrom(head, tail);
    return 0;
}