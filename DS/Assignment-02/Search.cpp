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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_liked_list(Node *head, int query)
{
    Node *temp = head;

    int flag = 0;
    int idx = 0;
    while (temp != NULL)
    {
        if (temp->val == query)
        {
            cout << idx << endl;
            flag = 1;
            break;
        }
        temp = temp->next;
        idx++;
    }

    if (flag == 0)
    {
        cout << "-1" << endl;
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;

        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }

        int query;
        cin >> query;
        print_liked_list(head, query);
    }

    return 0;
}