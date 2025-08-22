#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int val;
    cin >> val;

    for (int i = 0; i < val; i++)
    {
        int q;
        cin >> q;
        if (q < 0 || q >= n)
        {
            cout << "-1" << " ";
        }
        else if (adj_list[q].empty())
        {
            cout << "-1" << " ";
        }
        else
        {
            sort(adj_list[q].begin(), adj_list[q].end(), greater<int>());
            for (int x : adj_list[q])
            {
                cout << x << " ";
            }
        }
        cout << endl;
    }

    return 0;
}