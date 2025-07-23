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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // queue push operation
    void push(int val)
    {
        Node *newnode = new Node(val);
        sz++;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = tail->next;
    }

    // delete link list and delete 1st node
    void pop()
    {
        sz--;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
    }

    int front()
    {
        return head->val;
    }

    int back()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{

    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}