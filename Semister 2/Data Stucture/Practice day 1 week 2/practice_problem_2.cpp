// Question: Take a singly linked list as input and print the size of the linked list.
///////////// preoblem sovled /////////////

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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
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

void print_linked_list(Node *head)
{
    Node *temp = head;
    int elements[100] = {0};
    bool flag = false;
    while (temp != NULL)
    {
        elements[temp->val]++;
        temp = temp->next;
    }
    for (int i = 0; i < 100; i++)
    {
        if (elements[i] == 2)
        {
            flag = true;
            break;
        }
    }
    cout << (flag == true ? "YES" : "NO");
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    // cout << result;
    return 0;
}