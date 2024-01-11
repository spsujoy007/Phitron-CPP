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

void insert_at_tail(Node *&head, Node *&tail, Node *&track, string site)
{
    Node *newNode = new Node(site);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        track = newNode;
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

Node *find_site(Node *&track, string history)
{
    while (track != NULL)
    {
        if (track->site == history)
        {
            track = track;
            return track;
            break;
        }
        track = track->next;
    }
    return NULL;
}

void find_address(Node *head, Node *&track, string query)
{
    Node *tmp = head;
    // cout << tracks->site << ":tracked";
    if (query == "visit")
    {
        string address;
        Node *getadd = find_site(track, query);
        cin >> address;
        if (head != NULL)
        {
            cout << getadd->site;
            getadd = getadd;
            tmp = getadd;
        }
        else
            cout << "Not available 1";
    }
    else if (query == "next")
    {
        Node *getadd = find_site(track, query);
        if (head->next != NULL)
        {
            getadd = getadd->next;
            cout << getadd->site << " -next";
        }
        else
            cout << "Not available 2";
    }
    else if (query == "prev")
    {
        Node *getadd = find_site(track, query);
        if (head->next != NULL)
        {
            getadd = getadd->prev;
            cout << getadd->site << " -prev";
        }
        else
            cout << "Not available 3";
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *track = NULL;
    string site;
    while (true)
    {
        cin >> site;
        if (site == "end")
            break;
        insert_at_tail(head, tail, track, site);
    }

    int ts;
    cin >> ts;
    for (int i = 0; i < ts; i++)
    {
        string query;
        cin >> query;
        find_address(head, track, query);
        cout << endl;
    }
    // print_site(head);
    return 0;
}