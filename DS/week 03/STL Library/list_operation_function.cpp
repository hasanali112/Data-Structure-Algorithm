#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 40, 50, 50, 60, 40, 50, 60, 60};

    l.sort();

    l.unique();

    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}