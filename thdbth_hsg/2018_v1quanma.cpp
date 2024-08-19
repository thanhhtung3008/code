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

#define TASK "code"

void solve()
{
   ll n, m;
   cin >> n >> m;
   ll a[n + 2][m + 2];
   ll dp[n + 2][m + 2];
   memset(dp, 0, sizeof(dp));
   FOR(i, 1, n)
   {
      FOR(j, 1, m)
      {
         cin >> a[i][j];
      }
   }
   FOR(i, 1, m)
   {
      dp[1][i] = a[1][i];
   }
   FOR(i, 2, n)
   {
      FOR(j, 1, m)
      {
         dp[i][j] = a[i][j] + max({dp[i - 1][j - 2], dp[i - 1][j + 2], dp[i - 2][j - 1], dp[i - 2][j + 1]});
      }
   }
   cout << *max_element(dp[n] + 1, dp[n] + m + 1);
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   // freopen(TASK ".inp", "r", stdin);
   // freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine