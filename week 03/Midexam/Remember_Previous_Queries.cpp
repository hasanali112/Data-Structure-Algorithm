#include <bits/stdc++.h>
using namespace std;

void forword_print_list(list<int> l)
{
    cout << "L ->" << " ";
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;
}

void backward_print_list(list<int> l)
{
    l.reverse();
    cout << "R ->" << " ";
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        int sz = l.size();
        if (x == 0)
        {
            l.push_front(v);
            forword_print_list(l);
            backward_print_list(l);
        }
        else if (x == 1)
        {
            l.push_back(v);
            forword_print_list(l);
            backward_print_list(l);
        }
        else if (x == 2)
        {
            if (v < sz)
            {
                auto it = next(l.begin(), v);
                l.erase(it);
                forword_print_list(l);
                backward_print_list(l);
            }
            else
            {
                forword_print_list(l);
                backward_print_list(l);
            }
        }
    }

    return 0;
}