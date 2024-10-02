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

#define TASK "hainam"

void solve()
{
   ll n, k;
   cin >> n >> k;
   vll a(maxn, 0);
   ll ans = INT_MIN;
   FOR(i, 1, n)
   {
      ll c, x;
      cin >> c >> x;
      a[x] = c;
      ans = max(ans, x);
   }
   ll s = 0;
   ll kq = INT_MIN;
   FOR(i, 0, ans)
   {
      s += a[i];
      if (i >= 2 * k + 1)
      {
         s -= a[i - (2 * k + 1)];
      }
      kq = max(s, kq);
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