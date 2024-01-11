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

void insert_at_tail(Node *&head, Node *&tail, long long int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    temp = newNode;
}

void print_node(Node *v)
{
    if (v == NULL)
        return;
    cout << v->val << " ";
    print_node(v->next);
}

void insert_in_head(Node *&head, long long int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
        return;
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_any_node(Node *head, long long int pos)
{
    if (pos < 0)
        return;

    if (pos == 0)
    {
        delete_head(head);
        return;
    }
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        if (temp == NULL)
            return;
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
        return;

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t > 0)
    {
        int op;
        cin >> op;
        if (op == 0)
        {
            long long int val;
            cin >> val;
            insert_in_head(head, val);
        }
        else if (op == 1)
        {
            long long int val;
            cin >> val;
            insert_at_tail(head, tail, val);
        }
        else if (op == 2)
        {
            long long int val;
            cin >> val;
            if (val == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_any_node(head, val);
            }
        }
        print_node(head);
        cout << endl;
        t--;
    }

    return 0;
}