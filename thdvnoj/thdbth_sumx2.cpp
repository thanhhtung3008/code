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
   ll n;
   cin >> n;
   vll a(n);
   FOR(i, 0, n - 1)
   {
      cin >> a[i];
   }
   ll x;
   cin >> x;
   ll ans = 0;
   sort(a.begin(), a.end());
   FOR(i, 0, n - 2)
   {
      ll k = x - a[i];
      /*
      for (auto i : b)
      {
         cout << i << " ";
      }*/
      auto st = lower_bound(a.begin() + i + 1, a.end(), k);
      auto en = upper_bound(a.begin() + i + 1, a.end(), k);
      ans += distance(st, en);
      // cout << endl;
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