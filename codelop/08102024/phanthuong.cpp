#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k, a[1005][1005], dp[1005][1005];
ll ans = INT_MIN;

void solve()
{
   cin >> n >> k;
   for (ll i = 1; i <= n; i++)
   {
      for (ll j = 1; j <= n; j++)
      {
         cin >> a[i][j];
         dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
      }
   }
   for (ll i = k; i <= n; i++)
   {
      for (ll j = k; j <= n; j++)
      {
         ans = max(ans, dp[i][j] - dp[i - k][j] - dp[i][j - k] + dp[i - k][j - k]);
      }
   }
   cout << ans;
}
int main()
{
   solve();
   return 0;
}
