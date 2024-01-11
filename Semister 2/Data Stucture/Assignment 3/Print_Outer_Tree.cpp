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

Node *insert_tree()
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
        Node *p = q.front();
        q.pop();

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

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    stack<Node *> st;
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        st.push(f);

        if (f->left)
            q.push(f->left);
        else
        {
            if (f->right)
                q.push(f->right);
        }
    }

    while (!st.empty())
    {
        Node *p = st.top();
        cout << p->val << " ";
        st.pop();
    }
}
void level_order2(Node *root)
{
    Node *rightNode = root->right;
    queue<Node *> q;
    q.push(rightNode);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";

        if (f->right)
        {
            if (f->right)
                q.push(f->right);
        }
        else
        {
            if (f->left)
                q.push(f->left);
        }
    }
}

int main()
{
    Node *root = insert_tree();
    if (root)
    {
        if (root->left == NULL && root->right == NULL)
        {
            cout << root->val;
        }
        else
        {
            if (root->left)
            {
                level_order(root);
            }
            if (root->right)
            {
                if (!root->left)
                    cout << root->val << " ";
                level_order2(root);
            }
        }
    }
    return 0;
}