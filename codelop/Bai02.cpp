#include <bits/stdc++.h>
using namespace std;
const long long maxn = 1e6 + 9;

long long a[maxn];

void solve()
{
   long long n, m, v;
   cin >> n >> m >> v;
   while (m--)
   {
      long long l, r;
      cin >> l >> r;
      a[l] += v;
      a[r + 1] -= v;
   }
   for (long long i = 1; i <= n; i++)
   {
      a[i] = a[i - 1] + a[i];
   }
   long long ans = INT_MIN;
   for (long long i = 1; i <= n; i++)
   {
      if (a[i] > ans)
      {
         ans = a[i];
      }
   }
   cout << ans;
}

int main()
{
   // freopen("BAI02.inp", "r", stdin);
   // freopen("BAI02.out", "w", stdout);
   solve();
   return 0;
}