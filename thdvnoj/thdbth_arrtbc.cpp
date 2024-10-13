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

ll n, a[maxn], f[maxn];

ll tknp(ll l, ll r, ll v)
{
   ll ans = -1;
   while (l <= r)
   {
      ll m = (l + r) / 2;
      if (a[m] > v)
      {
         r = m - 1;
         ans = m;
      }
      else
      {
         l = m + 1;
      }
   }
   return ans;
}

void solve()
{
   cin >> n;
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   sort(a + 1, a + n + 1);
   FOR(i, 1, n)
   {
      f[i] = f[i - 1] + a[i];
   }
   ll d = f[n] / n;
   ll pos = tknp(1, n, d);
   if (pos != -1)
   {
      cout << f[n] - f[pos - 1];
   }
   else
   {
      cout << -1;
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