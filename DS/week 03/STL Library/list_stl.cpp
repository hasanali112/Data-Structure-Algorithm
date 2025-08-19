#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1 = {1, 2, 4, 5};
    list<int> l(l1);

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}