#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;                          // time complexity O(1)
    cin >> n;                       // time complexity O(1)
    for (int i = 1; i <= n; i += 2) // time complexity O(n)--- aita user er depend kore
    {
        cout << i << " ";
    }
    cout << endl;                // time complexity O(1)
    for (int i = 1; i <= n; i++) // time complexity O(n)
    {
        cout << i << " ";
    }

    return 0; // time complexity O(1)
}

// Now calculate the time complexity
// O(1+1+n+1+n) = O(2n+2) = O(n) // aikhane constant bad dowa hoyese karon compiler 10 bar colle 15 bar o colte parbe khub akta difference create hobe tai constant bad dowa hoise
// O(1+1+n+1+n) = O(2n+2) = O(n)