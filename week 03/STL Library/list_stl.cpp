#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(5, 10);

    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}