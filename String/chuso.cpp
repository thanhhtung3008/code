#include <bits/stdc++.h>
using namespace std;
int main()
{
   freopen("chuso.inp", "r", stdin);
   freopen("chuso.out", "w", stdout);
   string a;
   cin >> a;
   for (long long i = 0; i < a.size(); i++)
   {
      if (a[i] == 'n')
      {
         a.erase(i, 1);
      }
   }
   cout << a;
}