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

#define TASK "tienphoto"

void solve()
{
   ll l, m, n;
   cin >> l >> m >> n;
   if (l == 3)
   {
      if (n < 100)
      {
         if (m == 1)
         {
            cout << 600 * n;
         }
         else
         {
            cout << 800 * n;
         }
      }
      else
      {
         if (m == 1)
         {
            cout << 500 * n;
         }
         else
         {
            cout << 700 * n;
         }
      }
   }
   else
   {
      if (n < 100)
      {
         if (m == 1)
         {
            cout << 300 * n;
         }
         else
         {
            cout << 400 * n;
         }
      }
      else
      {
         if (m == 1)
         {
            cout << 250 * n;
         }
         else
         {
            cout << 350 * n;
         }
      }
   }
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine