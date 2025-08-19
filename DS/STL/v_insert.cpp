#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    v.insert(v.begin() + 2, 200);
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}