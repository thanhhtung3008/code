#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, x, dem, a[1005];
void solve()
{
   cin >> n;
   cin >> x;
   for (ll i = 1; i <= n; i++)
   {
      cin >> a[i];
      a[i] += a[i - 1];
   }
   for (ll i = 1; i <= n; i++)
   {
      if (abs(a[i]) > x)
         dem++;
   }
   sort(a + 1, a + 1 + n);
   for (ll i = 1; i <= n; i++)
   {
      cout << a[i] << " ";
   }
   cout << endl;
   for (ll i = 1; i <= n; i++)
   {
      dem += n - (upper_bound(a + 1, a + 1 + n, a[i] + x) - a - 1);
      // cout << n - (upper_bound(a + 1, a + 1 + n, a[i] + x) - a - 1) << endl;
   }
}

int main()
{
   solve();
   return 0;
}
