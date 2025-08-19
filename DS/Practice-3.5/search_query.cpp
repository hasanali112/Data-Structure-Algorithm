#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) // O(N)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); // O(NlogN)

    int val;
    while (cin >> val) // O(N) -- O(10log(N))
    {
        int flag = 0;
        int l = 0;
        int r = n - 1;
        while (l <= r) // O(log(N))
        {
            int mid = (l + r) / 2;
            if (v[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (v[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}