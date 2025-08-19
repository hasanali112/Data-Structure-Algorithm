#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.pop_back();
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}