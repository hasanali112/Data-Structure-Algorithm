#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 3, 40, 50};
    replace(l.begin(), l.end(), 40, 100);
    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}