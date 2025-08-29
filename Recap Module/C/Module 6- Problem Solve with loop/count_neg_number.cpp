#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pos = 0;
    int neg = 0;
    int evn = 0;
    int odd = 0;
    while (n--)
    {
        int val;
        cin >> val;

        if (val % 2 == 0)
        {
            evn++;
        }
        else
        {
            odd++;
        }

        if (val > 0)
        {
            pos++;
        }
        else if (val < 0)
        {
            neg++;
        }
    }

    cout << "Even: " << evn << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}