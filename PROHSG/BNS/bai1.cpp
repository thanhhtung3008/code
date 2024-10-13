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

const long long maxn = 1e5 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "bai1"

ll n, m;
ll a[maxn], b[maxn];

void solve()
{
   cin >> n >> m;
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   FOR(i, 1, m)
   {
      cin >> b[i];
   }
   sort(b + 1, b + m + 1);
   ll ans = INT_MAX;
   FOR(i, 1, n)
   {
      ll *st = lower_bound(b + 1, b + m + 1, a[i]);
      if (st != b + m + 1)
      {
         ll vt = st - b;
         ans = min(ans, abs(a[i] - b[vt]));
         ans = min(ans, abs(a[i] - b[vt - 1]));
      }
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