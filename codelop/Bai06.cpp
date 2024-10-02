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
   long long q;
   cin >> q; 
   while (q--)
   {
      long long x1, y1, x2, y2;
      cin >> x1 >> y1 >> x2 >> y2;
      cout << f[x2][y2] + f[x1 - 1][y1 - 1] - f[x1 - 1][y2] - f[x2][y1 - 1] << '\n';
   }
}

int main()
{
   // freopen("BAI06.inp", "r", stdin);
   // freopen("BAI06.out", "w", stdout);
   solve();
   return 0;
}