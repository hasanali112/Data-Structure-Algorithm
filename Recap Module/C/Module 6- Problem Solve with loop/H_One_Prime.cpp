#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val;
    cin >> val;

    if (val < 2)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool prime = true;

    for (int i = 2; i < val; i++)
    {
        if (val % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}