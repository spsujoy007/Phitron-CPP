#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string site;
    Node *next;
    Node *prev;
    Node(string site)
    {
        this->site = site;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string site)
{
    Node *newNode = new Node(site);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_site(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->site << " ";
        tmp = tmp->next;
    }
}

Node *find_site(Node *head, string history)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->site == history)
        {
            return temp;
            break;
        }
        temp = temp->next;
    }
    return NULL;
}

void find_address(Node *head, string query)
{
    Node *tmp = head;

    if (query == "visit")
    {
        string address;
        cin >> address;
        Node *getadd = find_site(head, address);
        if (getadd != NULL)
        {
            cout << getadd->site;
            tmp = getadd;
        }
        else
            cout << "Not available";
    }
    else if (query == "next")
    {
        if (head->next != NULL)
        {
            tmp = tmp->next;
            cout << tmp->site << " -next";
        }
    }
    else if (query == "prev")
    {
        if (head->next != NULL)
        {
            tmp = tmp->prev;
            cout << tmp->site << " -prev";
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string site;
    while (true)
    {
        cin >> site;
        if (site == "end")
            break;
        insert_at_tail(head, tail, site);
    }

    int ts;
    cin >> ts;
    for (int i = 0; i < ts; i++)
    {
        string query;
        cin >> query;
        find_address(head, query);
        cout << endl;
    }
    // print_site(head);
    return 0;
}