#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void inserted_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
}

void forword_print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void check_palindrom(Node *head, Node *tail)
{
    int flag = 1;
    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        if (i->val != j->val)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
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
        inserted_at_tail(head, tail, val);
    }

    check_palindrom(head, tail);

    return 0;
}