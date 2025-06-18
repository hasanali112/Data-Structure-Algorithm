#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;          // type - 1
    vector<int> v_2(5);     // type -2 size dite hoi first bracket diye karon aita constuctor call
    vector<int> v_3(5, 30); // type -3
    for (int i = 0; i < v_3.size(); i++)
    {
        cout << v_3[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    cout << v_2.size() << endl;
    return 0;
}