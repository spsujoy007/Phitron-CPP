#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1st store the node;
        Node *p = q.front();
        q.pop();

        // 2nd all work;
        int l, r;
        cin >> l >> r;
        Node *newLeft;
        Node *newRight;
        if (l == -1)
            newLeft = NULL;
        else
            newLeft = new Node(l);
        if (r == -1)
            newRight = NULL;
        else
            newRight = new Node(r);

        p->left = newLeft;
        p->right = newRight;

        // 3rd work children;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

// void level_order(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *f = q.front();
//         q.pop();

//         cout << f->val << " ";

//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
// }

bool b_search(Node *&root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        return b_search(root->left, x);
    }
    else
    {
        return b_search(root->right, x);
    };
}

int main()
{
    Node *root = input_tree();
    bool check = b_search(root, 16);
    if (check)
        cout << "Founded";
    else
        cout << "Not founded";

    return 0;
}