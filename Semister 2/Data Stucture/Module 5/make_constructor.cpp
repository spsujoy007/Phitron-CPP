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

int main()
{
    Node a(10), b(20);

    a.next = &b;
    cout << a.val << " - Menually" << endl; // manually
    cout << b.val << " - Menually" << endl; // manually
    cout << a.next->val << endl;            // short cut
    cout << (*a.next).val << endl;          // long cut

    return 0;
}