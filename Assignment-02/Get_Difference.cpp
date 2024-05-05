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
    tail = tail->next;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    while (temp != NULL)
    {
        if (temp->val > max)
        {
            max = temp->val;
        }

        if (temp->val < min)
        {
            min = temp->val;
        }
        temp = temp->next;
    }

    int result = max - min;
    cout << result << endl;
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

    print_linked_list(head);
    return 0;
}