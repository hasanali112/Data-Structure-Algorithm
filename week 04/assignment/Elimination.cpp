#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ts;
    cin >> ts;
    while (ts--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else if (st.top() == '0' && s[i] == '1')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}