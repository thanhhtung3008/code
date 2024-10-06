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
   long long q;
   cin >> q;
   while (q--)
   {
      long long l, r;
      cin >> l >> r;
      cout << a[r] - a[l - 1] << '\n';
   }
}

int main()
{
   freopen("BAI01.inp", "r", stdin);
   freopen("BAI01.out", "w", stdout);
   solve();
   return 0;
}