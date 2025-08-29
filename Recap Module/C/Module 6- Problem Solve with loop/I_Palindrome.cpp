#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val;
    cin >> val;
    int original_num = val;
    int reverse_num = 0;
    while (val > 0)
    {
        int last_dig = val % 10;
        reverse_num = reverse_num * 10 + last_dig;
        val = val / 10;
    }

    cout << reverse_num << endl;
    if (original_num == reverse_num)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}