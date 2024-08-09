/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

void magicFunc()
{
   ll m, n;
   cin >> m >> n;
   ll a[m + 1][n + 1], dp[m + 1][n + 1];
   memset(dp, 0, sizeof dp);
   FOR(i, 1, m)
   {
      FOR(j, 1, n)
      {
         cin >> a[i][j];
         dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
      }
   }
   ll ans = INT_MAX;
   FOR(i, 3, m)
   {
      FOR(j, 3, n)
      {
         ans = min(ans, dp[i][j] - dp[i - 3][j] - dp[i][j - 3] + dp[i - 3][j - 3]);
      }
   }
   cout << ans;
}
int main()
{
#ifndef ONLINE_JUDGE
#endif
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   magicFunc();
   return 0;
}