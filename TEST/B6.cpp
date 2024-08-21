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

bool dou(ll n)
{
   string s = to_string(n);
   set<char> se;
   for (auto c : s)
   {
      if (se.count(c))
      {
         return true;
      }
      se.insert(c);
   }
   return false;
}

void solve()
{
   ll n;
   cin >> n;
   vll a(n);
   vll mask(n);
   vll dp(1 << 10, 0);
   FOR(i, 0, n - 1)
   {
      cin >> a[i];
      if (dou(a[i]))
      {
         // cout << a[i];
         mask[i] = 0;
      }
      else
      {
         string s = to_string(a[i]);
         ll m = 0;
         for (char c : s)
         {
            m |= (1 << (c - '0'));
         }
         mask[i] = m;
         // cout << m << endl;
      }
   }
   FOR(i, 0, n - 1)
   {
      if (mask[i] == 0)
      {
         continue;
      }
      FORD(j, (1 << 10) - 1, 0)
      {
         if ((j & mask[i]) == 0)
         {
            dp[j | mask[i]] = max(dp[j | mask[i]], dp[j] + a[i]);
            // cout << j << " " << mask[i] << " " << (j | mask[i]) << " " << dp[j | mask[i]] << " " << dp[j] + a[i] << endl;
         }
      }
   }
   cout << *max_element(dp.begin(), dp.end());
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