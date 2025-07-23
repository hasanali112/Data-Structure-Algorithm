#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> l;

    // queue push operation
    void push(int val)
    {
        l.push_back(val);
    }

    // delete link list and delete 1st node
    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int back()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
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