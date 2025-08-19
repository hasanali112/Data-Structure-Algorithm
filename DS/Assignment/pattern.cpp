#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j == i || j == n - i + 1)
            {
                if (j == i && j == n - i + 1)
                {
                    cout << "X";
                }
                else if (j == i)
                {
                    cout << "\\";
                }
                else
                {
                    cout << "/";
                }
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}