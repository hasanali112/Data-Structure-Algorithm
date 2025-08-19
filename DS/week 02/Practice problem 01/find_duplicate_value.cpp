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

void print_linked_count(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL & temp->next != NULL)
    {
        if (temp->val == temp->next->val)
        {
            count++;
        }

        temp = temp->next;
    }

    cout << count << endl;
}

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(1);
    Node *b = new Node(8);
    Node *c = new Node(6);
    Node *d = new Node(2);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_count(head);

    return 0;
}