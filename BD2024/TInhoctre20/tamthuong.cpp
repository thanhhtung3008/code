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

#define TASK "tamthuong"

ll dp[maxn];

void ktao()
{
   FOR(i, 1, sqrt(maxn))
   {
      dp[i * i] += i;
      for (ll j = i + 1; j <= maxn / i; j++)
      {
         dp[i * j] += (i + j);
      }
   }
   FOR(i, 1, maxn)
   {
      dp[i] -= i;
   }
}

void solve()
{
   ktao();
   ll l, h;
   cin >> l >> h;
   ll kq = 0;
   double ans = INT_MAX;
   FOR(i, l, h)
   {
      double k = (double)dp[i] / i;
      // cout << i << " " << dp[i] << " " << k << endl;
      if (k < ans)
      {
         ans = k;
         // cout << ans << endl;
         kq = i;
      }
   }
   cout << kq;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}