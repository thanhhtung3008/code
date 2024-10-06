#include <bits/stdc++.h>
using namespace std;
const long long maxn = 1e3 + 9;

long long a[maxn];

void solve()
{
   long long n, m;
   cin >> n >> m;
   while (m--)
   {
      long long u, v, k;
      cin >> u >> v >> k;
      a[u] += k;
      a[v + 1] -= k;
   }
   for (long long i = 1; i <= n; i++)
   {
      a[i] = a[i - 1] + a[i];
   }
   long long q;
   cin >> q;
   while (q--)
   {
      long long l, r;
      cin >> l >> r;
      long long ans = INT_MIN;
      for (long long i = l; i <= r; i++)
      {
         if (a[i] > ans)
         {
            ans = a[i];
         }
      }
      cout << ans << '\n';
   }
}

int main()
{
   freopen("BAI05.inp", "r", stdin);
   freopen("BAI05.out", "w", stdout);
   solve();
   return 0;
}