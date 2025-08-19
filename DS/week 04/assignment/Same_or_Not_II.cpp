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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
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

    void pop()
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int size()
    {
        return sz;
    }

    int top()
    {
        return tail->val;
    }

    bool empty()
    {
        return head == NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
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
        head->prev = NULL;
    }

    int size()
    {
        return sz;
    }

    int front()
    {
        return head->val;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myStack s;
    myQueue q;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (s.size() != q.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        int flag = 1;
        while (!s.empty() && !q.empty())
        {
            if (s.top() != q.front())
            {
                flag = 0;
            }
            s.pop();
            q.pop();
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

    return 0;
}