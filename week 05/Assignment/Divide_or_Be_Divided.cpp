#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int val = 0;
    int val_2 = 0;

    val = s[x - 1] - '0';
    val_2 = s[y - 1] - '0';

    if ((val_2 != 0 && val % val_2 == 0) || (val != 0 && val_2 % val == 0))
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}