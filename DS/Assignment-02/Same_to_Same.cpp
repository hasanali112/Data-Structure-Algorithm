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

void print_liked_list(Node *head, Node *head_one)
{
    Node *temp = head;

    Node *temp_one = head_one;

    int count = 0;
    int count_one = 0;
    int flag = 1;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    while (temp_one != NULL)
    {
        count_one++;
        temp_one = temp_one->next;
    }

    temp = head;
    temp_one = head_one;

    if (count == count_one)
    {
        while (temp != NULL && temp_one != NULL)
        {
            if (temp->val != temp_one->val)
            {
                flag = 0;
            }
            temp = temp->next;
            temp_one = temp_one->next;
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *head_one = NULL;
    Node *tail_one = NULL;

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
    int val_one;
    while (true)
    {
        cin >> val_one;
        if (val_one == -1)
        {
            break;
        }
        insert_at_tail(head_one, tail_one, val_one);
    }
    print_liked_list(head, head_one);
    return 0;
}