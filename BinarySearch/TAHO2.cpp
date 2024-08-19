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
void try1(ll dem, ll s, ll p, vll a, ll cursum, ll curdem, ll &ans)
{
   if (cursum == s)
   {
      ans = min(ans, curdem * p);
   }
   if (cursum > s || dem > a.size())
   {
      return;
   }
   try1(dem + 1, s, p, a, cursum, curdem, ans);
   try1(dem + 1, s, p, a, cursum + a[dem], curdem + 1, ans);
}
void solve()
{
   ll n, s, p;
   cin >> n >> s >> p;
   vll a(n + 1);
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   ll ans = INT_MAX;
   try1(1, s, p, a, 0, 0, ans);
   if (ans == INT_MAX)
   {
      cout << -1;
   }
   else
   {
      cout << ans;
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