// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void addNodes(Node *&head, Node *&tail, int value)
// {
//     Node *addNode = new Node(value);
//     if (head == NULL)
//     {
//         head = addNode;
//         tail = addNode;
//         return;
//     }
//     tail->next = addNode;
//     tail = addNode;
// }

// void addHead(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// int nodeSize(Node *head)
// {
//     Node *tmp = head;
//     int cnt = 0;
//     while (tmp != NULL)
//     {
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }
// void dltHead(Node *&head)
// {
//     Node *dlthead = head;
//     head = head->next;
//     delete dlthead;
// }
// void dltNode(Node *head, int pos)
// {
//     Node *tmp = head;
//     for (int i = 1; i < pos - 1; i++)
//     {
//         tmp = tmp->next;
//     }
//     Node *dltnode = tmp->next;
//     tmp->next = tmp->next->next;
//     delete dltnode;
// }
// void prntNodes(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     Node *head = NULL, *tail = NULL;
//     int Q;
//     cin >> Q;
//     while (Q > 0)
//     {
//         int X;
//         cin >> X;
//         if (X == 0)
//         {
//             int V;
//             cin >> V;
//             addHead(head, V);
//             // addNodes(head, tail, V);
//             prntNodes(head);
//         }
//         else if (X == 1)
//         {
//             int V;
//             cin >> V;
//             addNodes(head, tail, V);
//             prntNodes(head);
//         }
//         else if (X == 2)
//         {
//             int V;
//             cin >> V;
//             int sz = nodeSize(head);
//             if (sz > V)
//             {
//                 if (V == 0)
//                 {

//                     dltHead(head);
//                     prntNodes(head);
//                 }
//                 else
//                 {

//                     dltNode(head, V);
//                     prntNodes(head);
//                 }
//             }
//         }
//         // prntNodes(head);
//         Q--;
//     }

//     return 0;
// }

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
void addHead(Node *&head, int value)
{
    Node *addhead = new Node(value);
    addhead->next = head;
    head = addhead;
}
void addNodes(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int nodeSize(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void dltHead(Node *&head)
{
    Node *dlthead = head;
    head = head->next;
    delete dlthead;
}
void dltNode(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *dltnode = tmp->next;
    tmp->next = tmp->next->next;
    delete dltnode;
}
void prntNodes(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int Q;
    cin >> Q;
    while (Q > 0)
    {
        int X;
        cin >> X;
        if (X == 0)
        {
            int V;
            cin >> V;
            addHead(head, V);
            // prntNodes(head);
        }
        else if (X == 1)
        {
            int V;
            cin >> V;
            addNodes(head, tail, V);
            // prntNodes(head);
        }
        else if (X == 2)
        {
            int V;
            cin >> V;
            int sz = nodeSize(head);
            if (sz > V)
            {
                if (V == 0)
                {

                    dltHead(head);
                    // prntNodes(head);
                }
                else
                {

                    dltNode(head, V);
                    // prntNodes(head);
                }
            }
        }
        prntNodes(head);
        Q--;
    }

    return 0;
}
