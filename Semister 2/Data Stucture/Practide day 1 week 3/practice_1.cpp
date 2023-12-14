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
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool size(Node *head, Node *head2)
{
    Node *temp = head;
    Node *temp2 = head2;
    int count1 = 0, count2 = 0;
    bool flag = true;
    while (temp != NULL)
    {
        count1++;
        temp = temp->next;
    }
    while (temp2 != NULL)
    {
        count2++;
        temp2 = temp2->next;
    }
    // cout << count1 << " " << count2;
    if (count1 != count2)
    {
        flag = false;
    }
    return flag;
}

int check_equality(Node *head, Node *head2)
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
    return flag;
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

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_at_tail(head2, tail2, val2);
    }
    if (size(head, head2) == false)
    {
        cout << "NO";
        return 0;
    };
    int flag = check_equality(head, head2);
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}