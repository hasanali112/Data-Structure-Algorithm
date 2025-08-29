#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int val;
        cin >> val;
        long long int result = 1;
        for (int i = 1; i <= val; i++)
        {
            result = result * i;
        }
        cout << result << endl;
    }

    return 0;
}