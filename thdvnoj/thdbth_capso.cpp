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

ll a[100001];

void solve()
{
   ll n, s;
   cin >> n >> s;
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   sort(a + 1, a + n + 1);
   ll ans = 0;
   FOR(i, 1, n)
   {
      ans += upper_bound(a + 1 + i, a + n + 1, s - a[i]) - lower_bound(a + 1 + i, a + n + 1, s - a[i]);
   }
   if (ans != 0)
      cout << ans;
   else
   {
      cout << 0;
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