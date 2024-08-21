/* Author : Nguyen Thanh Tung - Tran Hung Dao High School for Gifted Student */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ft first
#define sc second
#define ll long long
#define vll vector<ll>
#define vp vector<pll>
#define pll pair<ll, ll>
#define ull unsigned long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const long long maxn = 1e6 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "input"

void solve()
{
   ll n, m;
   cin >> n >> m;
   ll a[n + 1][m + 1];
   ll dp[n + 1][m + 1];
   FOR(i, 1, n)
   {
      FOR(j, 1, m)
      {
         cin >> a[i][j];
      }
   }
   ll l = 0, r = 1e9 + 7;
   ll ans = r;
   while (l <= r)
   {
      ll md = (l + r) / 2;
      FOR(i, 1, n)
      {
         FOR(j, 1, m)
         {
            dp[i][j] = -1;
         }
      }
      if (md > a[1][1])
      {
         dp[1][1] = md + a[1][1];
      }
      FOR(i, 1, n)
      {
         FOR(j, 1, m)
         {
            if (dp[i][j] == -1)
            {
               continue;
            }
            if (i + 1 <= n && dp[i][j] > a[i + 1][j])
            {
               dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + a[i + 1][j]);
            }
            if (j + 1 <= m && dp[i][j] > a[i][j + 1])
            {
               dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + a[i][j + 1]);
            }
         }
      }
      if (dp[n][m] != -1)
      {
         if (ans > md)
         {
            ans = md;
         }
         r = md - 1;
      }
      else
      {
         l = md + 1;
      }
   }
   cout << ans;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine