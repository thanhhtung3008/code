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

ll n, k, a[maxn];

ll tinh(ll m)
{
   ll t = 0;
   FOR(i, 1, n)
   {
      t += (a[i] / m);
   }
   return t;
}

void solve()
{
   while (cin >> n)
   {
      cin >> k;
      FOR(i, 1, n)
      {
         cin >> a[i];
      }
      ll ans = 0;
      ll l = 1, r = 1e9;
      sort(a + 1, a + n + 1);
      while (l <= r)
      {
         ll m = (l + r) / 2;
         ll d = tinh(m);
         if (d >= k)
         {
            ans = m;
            l = m + 1;
            // cout << ans;
         }
         else
         {
            r = m - 1;
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