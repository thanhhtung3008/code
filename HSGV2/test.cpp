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

ll maxReward(vll &c, int n, int k)
{
   vll dp(k + 1, 0);
   FOR(i, 1, k)
   {
      ll cur = LONG_LONG_MIN;
      for (ll j = i * 2 - 1; j < n; j++)
      {
         cur = max(cur, dp[i - 1] - c[j - 1]);
         dp[i] = max(dp[i], cur + c[j]);
      }
   }
   return dp[k];
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   // freopen(TASK ".inp", "r", stdin);
   // freopen(TASK ".out", "w", stdout);
   ll n, k;
   cin >> n >> k;
   vll c(n);
   FOR(i, 0, n - 1)
   {
      cin >> c[i];
   }
   cout << maxReward(c, n, k) << endl;
   return 0;
}
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine