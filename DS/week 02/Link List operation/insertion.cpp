#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    cout << *p << endl;
}
int main()
{
    int a = 10;
    int *p = &a;
    cout << *p << endl;
    fun(p);

    return 0;
}