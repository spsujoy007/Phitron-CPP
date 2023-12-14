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
        cout << endl
             << "Head added..." << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linkedlink(Node *head)
{
    Node *temp = head;
    cout << endl
         << "Your linked list: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_in_anypos(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid index!!!" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;

    cout << endl
         << "Value added in the position: " << pos << ";" << endl;
}

void insert_in_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "New head inserted." << endl;
}

void delete_any_node(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid index!!!" << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << endl
             << "Inavlid index!!!" << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;

    cout << endl
         << "Node deleted. Position: " << pos << endl;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "There are no head" << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    cout << endl
         << "Head deleted succesfully..." << endl;
}

int main()
{
    Node *head = NULL;
    int test = 5;
    while (test > 0)
    {
        // cout << endl
        //      << "Type: 1 to add at tail." << endl;
        // cout << "Type: 2 for print linkedlist." << endl;
        // cout << "Type: 3 for insert in any post." << endl;
        // cout << "Type: 4 change head." << endl;
        // cout << "Type: 5 delete any node." << endl;
        // cout << "Type: 6 delete head." << endl;
        // cout << "Type: 7 to terminate." << endl;
        int op;
        cout << "Enter option: ";
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Enter a value: ";
            cin >> v;
            insert_to_tail(head, v);
        }
        else if (op == 2)
        {
            print_linkedlink(head);
        }
        else if (op == 3)
        {
            int pos, val;
            cout << "Enter the position: ";
            cin >> pos;
            cout << "Enter the value: ";
            cin >> val;
            if (pos > 0)
            {
                insert_in_anypos(head, pos, val);
            }
            else
            {
                insert_in_head(head, val);
            }
        }
        else if (op == 4)
        {
            int val;
            cout << "Insert a new head value: ";
            cin >> val;
            insert_in_head(head, val);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter the pos- you want to delete: ";
            cin >> pos;
            if (pos > 0)
            {
                delete_any_node(head, pos);
            }
            else
            {
                delete_head(head);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
        print_linkedlink(head);
        test--;
    }

    return 0;
}