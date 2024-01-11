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

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    cout << max_height(root);

    return 0;
}