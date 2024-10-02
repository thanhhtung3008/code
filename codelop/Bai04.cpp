#include <bits/stdc++.h>
using namespace std;
const long long maxn = 1005;

long long a[maxn];

void solve()
{
   long long n;
   cin >> n;
   for (long long i = 1; i <= n; i++)
   {
      long long x;
      cin >> x;
      a[i] = a[i - 1] + x;
   }
   long long ans = INT_MIN;
   long long q;
   cin >> q;
   while (q--)
   {
      long long l, r;
      cin >> l >> r;
      long long ans = INT_MIN;
      for (long long i = l; i <= r; i++)
      {
         for (long long j = l; j <= i; j++)
         {
            ans = max(ans, a[i] - a[j - 1]);
         }
      }
      cout << ans << '\n';
   }
}

int main()
{
   // freopen("BAI04.inp", "r", stdin);
   // freopen("BAI04.out", "w", stdout);
   solve();
   return 0;
}