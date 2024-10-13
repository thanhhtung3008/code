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

ll l, m, n;

void solve()
{
   cin >> l >> m >> n;
   if (l == 4)
   {
      if (m == 1)
      {
         if (n < 100)
         {
            cout << n * 300;
         }
         else
         {
            cout << n * 250;
         }
      }
      else
      {
         if (n < 100)
         {
            cout << n * 400;
         }
         else
         {
            cout << n * 350;
         }
      }
   }
   else
   {
      if (m == 1)
      {
         if (n < 100)
         {
            cout << n * 600;
         }
         else
         {
            cout << n * 500;
         }
      }
      else
      {
         if (n < 100)
         {
            cout << n * 800;
         }
         else
         {
            cout << n * 700;
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