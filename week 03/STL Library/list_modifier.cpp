#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 4};
    list<int> l2 = {70, 89};
    // l2 = l;

    // l2.assign(l.begin(), l.end());

    l.push_back(100);
    l.push_front(40);

    l.pop_back();
    l.pop_front();
    l.insert(next(l.begin(), 2), l2.begin(), l2.end());
    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}