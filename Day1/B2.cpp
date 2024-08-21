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

bool dp[maxn];

void sinh(ll maxx, ll k, ll l)
{
   memset(dp, 0, sizeof(dp));
   dp[0] = false;
   FOR(i, 1, maxx)
   {
      if ((i - 1 >= 0 && dp[i - 1] == false) || (i - k >= 0 && dp[i - k] == false) || (i - l >= 0 && dp[i - l] == false))
      {
         dp[i] = true;
      }
   }
}

void solve()
{
   ll k, l, n;
   cin >> k >> l >> n;
   vll a(n + 1);
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   ll maxx = *max_element(a.begin() + 1, a.end());
   sinh(maxx, k, l);
   FOR(i, 1, n)
   {
      if (dp[a[i]])
      {
         cout << "P";
      }
      else
      {
         cout << "T";
      }
   }
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