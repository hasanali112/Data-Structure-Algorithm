#include <bits/stdc++.h>
using namespace std;
int main()
{
   list<string> l;

   string a;
   while (cin >> a && a != "end")
   {
      l.push_back(a);
   }

   int q;
   cin >> q;
   auto current = l.begin();
   while (q--)
   {
      string cmd;
      cin >> cmd;
      if (cmd == "visit")
      {
         string address_name;
         cin >> address_name;
         auto is_found = find(l.begin(), l.end(), address_name);
         if (is_found != l.end())
         {
            current = is_found;
            cout << *is_found << endl;
         }
         else
         {
            cout << "Not Available" << endl;
         }
      }

      else if (cmd == "prev")
      {
         if (prev(current) != prev(l.begin()))
         {
            current = prev(current);
            cout << *current << endl;
         }
         else
         {
            cout << "Not Available" << endl;
         }
      }
      else if (cmd == "next")
      {
         if (next(current) != l.end())
         {
            current = next(current);
            cout << *current << endl;
         }
         else
         {
            cout << "Not Available" << endl;
         }
      }
   }

   return 0;
}