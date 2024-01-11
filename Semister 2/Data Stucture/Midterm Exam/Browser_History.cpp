#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string address;
    Node *next;
    Node *prev;
    Node(string address)
    {
        this->address = address;
        this->next = NULL;
        this->prev = NULL;
    }
};

void store_sites(Node *&head, Node *&tail, Node *&track, string site_name)
{
    Node *newNode = new Node(site_name);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        track = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void query_site(Node *head, Node *&track)
{
    string find_site;
    cin >> find_site;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (find_site == tmp->address)
        {
            track = tmp;
            cout << track->address << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}
void query_next(Node *head, Node *&track)
{
    if (track->next != NULL)
    {
        track = track->next;
        cout << track->address << endl;
    }
    else
        cout << "Not Available" << endl;
}
void query_prev(Node *head, Node *&track)
{
    if (track->prev != NULL)
    {
        track = track->prev;
        cout << track->address << endl;
    }
    else
        cout << "Not Available" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *track = NULL;
    string input_sites;
    while (true)
    {
        cin >> input_sites;
        if (input_sites == "end")
            break;
        store_sites(head, tail, track, input_sites);
    }
    int ts;
    cin >> ts;
    for (int i = 0; i < ts; i++)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            query_site(head, track);
        }
        else if (command == "next")
        {
            query_next(head, track);
        }
        else if (command == "prev")
        {
            query_prev(head, track);
        }
    }

    return 0;
}