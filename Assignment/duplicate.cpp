#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            flag = 0;
            break;
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
    return 0;
}