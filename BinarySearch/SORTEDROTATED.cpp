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

ll chot(vll p, ll n)
{
   ll l = 1, r = n - 1;
   while (l <= r)
   {
      ll m = (l + r) / 2;
      if (p[m] < p[m - 1] && p[m] < p[m + 1])
      {
         return m;
      }
      else if (p[m] > p[0])
      {
         l = m + 1;
      }
      else
      {
         r = m - 1;
      }
   }
   return -1;
}

ll tknp(vll p, ll l, ll r, ll x)
{
   ll ans = -1;
   while (l <= r)
   {
      ll m = (l + r) / 2;
      if (p[m] == x)
      {
         ans = m;
         break;
      }
      else if (p[m] < x)
      {
         l = m + 1;
      }
      else
      {
         r = m - 1;
      }
   }
   return ans;
}

void solve()
{
   ll q;
   cin >> q;
   while (q--)
   {
      ll n;
      cin >> n;
      vll p(n);
      FOR(i, 0, n - 1)
      {                                                        
         cin >> p[i];
      }
      ll x;
      cin >> x;
      ll pos = chot(p, n);
      if (pos == -1)
      {
         cout << tknp(p, 0, n - 1, x) << endl;
      }
      else
      {
         if (x >= p[0])
         {
            cout << tknp(p, 0, pos - 1, x) << endl;
         }
         else
         {
            cout << tknp(p, pos, n - 1, x) << endl;
         }
      }
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