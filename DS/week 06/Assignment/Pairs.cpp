#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> l, pair<string, int> r)
{
    if (l.first < r.first)
    {
        return true;
    }
    else if (l.first == r.first)
    {
        if (l.second > r.second)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    vector<pair<string, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int uni_int;
        cin >> name >> uni_int;
        v.push_back({name, uni_int});
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}