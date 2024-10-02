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

ll exgcd(ll a, ll b, ll &x, ll &y)
{
   if (b == 0)
   {
      x = 1;
      y = 0;
      return a;
   }
   ll x1, y1;
   ll d = exgcd(b, a % b, x1, y1);
   x = y1;
   y = x1 - (a / b) * y1;
   return d;
}

void solve()
{
   ll a, b, m;
   cin >> a >> b >> m;
   ll s, t;
   ll d = exgcd(abs(a), m, s, t);
   if (a < 0)
   {
      s = -s;
   }
   if (b % d != 0)
   {
      cout << 0 << endl;
      return;
   }
   ll x0 = (s * (b / d)) % m;
   if (x0 < 0)
   {
      x0 += m;
   }
   vll p;
   FOR(k, 0, d - 1)
   {
      ll x = (x0 + k * (m / d)) % m;
      if (x < 0)
      {
         x += m;
      }
      p.push_back(x);
   }
   sort(p.begin(), p.end());
   cout << p.size() << endl;
   for (ll i : p)
   {
      cout << i << endl;
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