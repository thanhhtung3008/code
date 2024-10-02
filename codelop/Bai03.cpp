#include <bits/stdc++.h>
using namespace std;
const long long maxn = 1005;

long long a[maxn][maxn];
long long f[maxn][maxn];

void solve()
{
   long long n;
   cin >> n;
   for (long long i = 1; i <= n; i++)
   {
      for (long long j = 1; j <= n; j++)
      {
         cin >> a[i][j];
      }
   }
   for (long long i = 1; i <= n; i++)
   {
      for (long long j = 1; j <= n; j++)
      {
         f[i][j] = a[i][j] + f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1];
      }
   }
   /*
   for (long long i = 1; i <= n; i++)
   {
      for (long long j = 1; j <= n; j++)
      {
         cout << f[i][j] << " ";
      }
      cout << '\n';
   }
   */
   long long x, y;
   cin >> x >> y;
   cout << f[x][y];
}

int main()
{
   // freopen("BAI03.inp", "r", stdin);
   // freopen("BAI03.out", "w", stdout);
   solve();
   return 0;
}