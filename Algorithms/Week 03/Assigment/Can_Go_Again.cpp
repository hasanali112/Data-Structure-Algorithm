#include <bits/stdc++.h>
using namespace std;
class Edage
{
public:
    long long int a, b, c;
    Edage(long long a, long long b, long long c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

long long int dis[1005];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edage> edage_list;
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        edage_list.push_back(Edage(a, b, c));
    }

    for (int i = 0; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }

    int src;
    cin >> src;
    dis[src] = 0;
    bool cylce = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edage_list)
        {
            long long int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }

    for (auto ed : edage_list)
    {
        long long int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
        {
            cylce = true;
            break;
        }
    }

    if (cylce)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        int t;
        cin >> t;
        while (t--)
        {
            int x;
            cin >> x;
            if (dis[x] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[x] << endl;
            }
        }
    }

    return 0;
}