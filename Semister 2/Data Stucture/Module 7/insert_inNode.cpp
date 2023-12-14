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

void insert_node(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // Node *temp = head;
    // while (temp->next != NULL)
    // {
    //     temp = temp->next;
    // }
    // temp->next = newNode;
    tail->next = newNode;
    tail = newNode;
}

void print_Linked_list(Node *v)
{
    if (v == NULL)
        return;
    cout << v->val << " ";
    print_Linked_list(v->next);
}

int main()
{
    Node *head = NULL;
    Node *tail = new Node(10);
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_node(head, tail, v);
    }

    // cout << tail->val << endl;
    print_Linked_list(head);
    return 0;
}