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
   ll n, q;
   cin >> n >> q;
   vll p(n + 1);
   FOR(i, 1, n)
   {
      cin >> p[i];
      p[i] += p[i - 1];
   }
   while (q--)
   {
      ll u, v;
      cin >> u >> v;
      ll maxsum = p[v] - p[u - 1];
      ll l = u, r = v;
      ll ans = INT_MAX;
      while (l <= r)
      {
         ll m = (l + r) / 2;
         ll t1 = p[m] - p[u - 1];
         ll t2 = maxsum - t1;
         ll ab = abs(t2 - t1);
         ans = min(ans, ab);
         if (t1 > t2)
         {
            r = m - 1;
         }
         else if (t1 < t2)
         {
            l = m + 1;
         }
      }
      cout << ans << endl;
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