#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
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