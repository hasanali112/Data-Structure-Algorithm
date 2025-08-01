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
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root != NULL)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void print_tree(Node *root)
{
    if (root == NULL)
    {
        cout << "no node available" << endl;
        return;
    }

    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});

    int val;
    cin >> val;

    bool flag = false;
    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        q.pop();

        Node *node = parent.first;
        int level = parent.second;

        if (level == val)
        {
            cout << node->val << " ";
            flag = true;
        }

        if (node->left != NULL)
            q.push({node->left, level + 1});
        if (node->right != NULL)
            q.push({node->right, level + 1});
    }

    if (flag == false)
    {
        cout << "Invalid" << " ";
    }
}
int main()
{

    Node *root = input_tree();
    print_tree(root);

    return 0;
}