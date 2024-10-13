#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   ll m, n;
   cin >> m >> n;
   ll a[m + 4][n + 4], dp[m + 4][n + 4];
   memset(dp, 0, sizeof(dp));
   for (ll i = 1; i <= m; i++)
   {
      for (ll j = 1; j <= n; j++)
      {
         cin >> a[i][j];
         dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
      }
   }
   ll ans = INT_MAX;
   for (ll i = 3; i <= m; i++)
   {
      for (ll j = 3; j <= n; j++)
      {
         ans = min(ans, dp[i][j] - dp[i - 3][j] - dp[i][j - 3] + dp[i - 3][j - 3]);
      }
   }
   cout << ans;
}
int main()
{
   solve();
   return 0;
}
