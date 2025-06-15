#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;                          // time complexity O(1)
    cin >> n;                       // time complexity O(1)
    for (int i = 1; i <= n; i *= 2) // time complexity O(logN)--- aita user er depend kore
    {
        cout << i << " ";
    }

    return 0; // time complexity O(1)
}

// Now calculate the time complexity
// jodi increment kimba decrement part gun ba vag kore hoi tahole O(logN) hoi. karon gun ba vag kore jowate step ba operation kom hoi tai complexity logN hoi.