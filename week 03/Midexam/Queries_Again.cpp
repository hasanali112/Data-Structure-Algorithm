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

int count_size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

void inserted_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    newnode->prev = NULL;
}

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

void inserted_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    int sz = count_size(head);
    if (sz < idx || idx < 0)
    {
        cout << "Invalid" << endl;
        return;
    }
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}

void forword_print_list(Node *head)
{
    Node *temp = head;
    cout << "L ->" << " ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void backward_print_list(Node *tail)
{
    Node *temp = tail;
    cout << "R ->" << " ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        int sz = count_size(head);
        if (sz < x || x < 0)
        {
            cout << "Invalid" << endl;
        }

        else if (x == 0)
        {
            inserted_at_head(head, tail, v);
            forword_print_list(head);
            backward_print_list(tail);
        }
        else if (sz == x)
        {
            inserted_at_tail(head, tail, v);
            forword_print_list(head);
            backward_print_list(tail);
        }
        else
        {
            inserted_any_pos(head, tail, x, v);
            forword_print_list(head);
            backward_print_list(tail);
        }
    }

    return 0;
}