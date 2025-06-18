#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> v_2;
    v_2 = v;

    // for (int i = 0; i < v_2.size(); i++)
    // {
    //     cout << v_2[i] << " ";
    // }

    for (int x : v_2) // range base for-- loop
    {
        cout << x << " ";
    }

    return 0;
}