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

    vector<int> sum(n);

    sum[0] = v[0];

    for (int i = 1; i < n; i++) // O(N)
    {
        sum[i] = sum[i - 1] + v[i];
    }

    for (int i = 0; i < n; i++) // O(N)
    {
        cout << sum[i] << " ";
    }

    return 0;
}

// now time complexity is O(N);