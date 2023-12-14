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

void insert_to_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_nodes(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    };
};

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << endl
             << "Option 1 to add node: " << endl;
        cout << "Option 2 print node: " << endl;
        cout << "Option 3 terminate:" << endl;
        int op;
        cout << "-> Option: ";
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Enter a value: ";
            cin >> v;
            insert_to_tail(head, v);
            cout << endl
                 << "Node entered in tail" << endl
                 << endl;
        }
        else if (op == 2)
        {
            cout << endl
                 << "Your nodes are: ";
            print_nodes(head);
            cout << endl;
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}