#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int col_1 = INT_MIN, col_2 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > col_1)
            {
                col_2 = col_1;
                col_1 = a[i];
            }
            else if (a[i] > col_2)
            {
                col_2 = a[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == col_1)
            {
                cout << i << " ";
            }
            else if (a[i] == col_2)
            {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}