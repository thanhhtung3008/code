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
   ll a[n + 1];
   ll pos = 0;
   FOR(i, 1, n)
   {
      ll x;
      cin >> x;
      if (x == m)
      {
         pos = i;
      }
      else if (x < m)
      {
         a[i] = -1;
      }
      else if (x > m)
      {
         a[i] = 1;
      }
   }
   ll s = 0;
   ll ans = 1;
   unordered_map<ll, ll> mp;
   FORD(i, pos - 1, 1)
   {
      s += a[i];
      if (s == 0)
      {
         ans++;
      }
      mp[s]++;
   }
   s = 0;
   FOR(i, pos + 1, n)
   {
      s += a[i];
      if (s == 0)
      {
         ans++;
      }
      ans += mp[-s];
   }
   cout << ans;
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