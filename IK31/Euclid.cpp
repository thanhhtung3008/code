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

ll gcd(ll a, ll b)
{
   if (b == 0)
   {
      return a;
   }
   return gcd(a, a % b);
}
// O(log(max(a,b)))

ll gcd1(ll a, ll b)
{
   ll tmp;
   while (b != 0)
   {
      tmp = a % b;
      a = b;
      b = tmp;
   }
   return tmp;
}

void solve()
{
   FOR(i, 1, 200)
   {
      if ((i * 9) % 15 == 12)
      {
         cout << i << endl;
      }
   }
}

void ext_gcd(ll a, ll b, ll &d, ll &x, ll &y)
{
   if (b == 0)
   {
      d = a;
      x = 1;
      y = 0;
   }
   else
   {
      ll x1, y1;
      ext_gcd(b, a % b, d, x1, y1);
      x = y1;
      y = x1 - a / b * y1;
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