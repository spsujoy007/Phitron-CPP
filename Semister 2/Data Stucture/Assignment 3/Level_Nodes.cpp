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

void find_level_nodes(Node *root)
{
    int lv;
    cin >> lv;
    if (root == NULL)
    {
        return;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    int lvs = 0;
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        Node *node = p.first;
        int level = p.second;
        lvs = level;
        q.pop();

        // main work;
        if (lv == level)
        {
            cout << node->val << " ";
        }

        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
    if (lv > lvs)
    {
        cout << "Invalid" << endl;
    }
}

int main()
{
    Node *root = insert_tree();
    find_level_nodes(root);
    return 0;
}