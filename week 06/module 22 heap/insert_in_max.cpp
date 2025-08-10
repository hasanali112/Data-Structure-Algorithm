#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int val;
    cin >> val;
    v.push_back(val);
    int cur_indx = v.size() - 1;

    while (cur_indx != 0)
    {
        int par_idx = (cur_indx - 1) / 2;

        if (v[par_idx] < v[cur_indx])
            swap(v[par_idx], v[cur_indx]);
        else
            break;

        cur_indx = par_idx;
    }

    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}