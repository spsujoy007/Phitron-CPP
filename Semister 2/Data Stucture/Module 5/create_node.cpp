#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a, b;
    a.val = 10;
    b.val = 20;
    a.next = &b;
    cout << a.val << endl;
    // cout << b.val << endl; // manually
    cout << a.next->val << endl;   // short cut
    cout << (*a.next).val << endl; // long cut

    return 0;
}