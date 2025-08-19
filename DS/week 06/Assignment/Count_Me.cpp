#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val;
    cin >> val;
    cin.ignore();
    while (val--)
    {

        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        int max_count = 0;
        string ans;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max_count)
            {
                max_count = mp[word];
                ans = word;
            }
        }

        cout << ans << " " << max_count << endl;
    }

    return 0;
}