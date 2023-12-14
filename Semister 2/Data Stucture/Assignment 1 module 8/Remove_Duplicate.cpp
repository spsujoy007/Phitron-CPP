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

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linkedlist(Node *v)
{
    if (v == NULL)
        return;
    cout << v->val << " ";
    print_linkedlist(v->next);
}

void remove_duplicates(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp2 = temp;
        while (temp2->next != NULL)
        {
            if (temp->val == temp2->next->val)
            {
                Node *deleteNode = temp2->next;
                temp2->next = temp2->next->next;
                delete deleteNode;
            }
            else
            {
                temp2 = temp2->next;
            }
        }

        temp = temp->next;
    }
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
        insert_at_tail(head, tail, v);
    }
    remove_duplicates(head);
    print_linkedlist(head);

    return 0;
}