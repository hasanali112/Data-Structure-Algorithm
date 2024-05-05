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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_position(Node *&head, int indx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < indx - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void delete_any_position(Node *&head, int indx)
{

    Node *temp = head;

    for (int i = 0; i < indx - 1; i++)
    {
        temp = temp->next;
    }

    Node *deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
}

void delete_head(Node *&head)
{
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
}

int size_liked_list(Node *head)
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

void print_liked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val, idx, val_one;
    cin >> val;
    for (int i = 1; i <= val; i++)
    {
        cin >> idx >> val_one;
        if (idx == 0)
        {
            insert_at_head(head, tail, val_one);
            print_liked_list(head);
        }
        else if (idx == 1)
        {

            insert_at_tail(head, tail, val_one);
            print_liked_list(head);
        }

        else if (idx == 2)
        {
            int sz = size_liked_list(head);
            if (sz < val_one)
            {
                print_liked_list(head);
            }
            else if (val_one == 0)
            {
                delete_head(head);
                print_liked_list(head);
            }

            else
            {
                delete_any_position(head, val_one);
                print_liked_list(head);
            }
        }
    }

    return 0;
}