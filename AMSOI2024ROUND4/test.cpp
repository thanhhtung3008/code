#include <bits/stdc++.h>

using namespace std;
int n;
int a[100009];
void nhap()
{
   cin >> n;
   for (int i = 1; i <= n; i++)
   {
      cin >> a[i];
   }
}
void xuat()
{
   int t = 0;
   for (int i = 1; i <= n; i++)
   {
      t += a[i];
   }
   if (round((double)t / n) == 5)
   {
      cout << 0;
      return;
   }
   sort(a + 1, a + 1 + n);
   int h = 0;
   for (int j = 1; j <= n; j++)
   {
      t += (5 - a[j]);
      ++h;
      if (round((double)t / n) == 5)
      {
         cout << h;
         break;
      }
   }
}
int main()
{
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   nhap();
   xuat();
   return 0;
}