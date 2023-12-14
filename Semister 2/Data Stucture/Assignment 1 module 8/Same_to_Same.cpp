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
    }
    tail->next = newNode;
    tail = newNode;
}

int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        // cout << temp->val;
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void check_equality(Node *head, Node *head2)
{
    Node *temp = head;
    Node *temp2 = head2;
    bool flag = true;
    while (temp != NULL)
    {
        if (temp->val != temp2->val)
        {
            flag = false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    if (flag == 1)
        cout << "YES";
    else
    {
        cout << "NO";
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
    int s = size(head);

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head2, tail2, v);
    }
    int s2 = size(head2);

    if (s == s2)
    {
        check_equality(head, head2);
    }
    else
        cout << "NO";

    return 0;
}