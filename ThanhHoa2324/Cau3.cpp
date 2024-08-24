/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define vll vector<ll>
#define vp vector<pll>
#define pll pair<ll, ll>
#define ull unsigned long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

void wfile()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
}

void OJ()
{
#ifndef ONLINE_JUDGE
#endif
}

ll n;
void magicFunc()
{
   cin >> n;
   ll a[n * n + 1];
   FOR(i, 1, n * n)
   {
      cin >> a[i];
   }
   sort(a + 1, a + n * n + 1);
   vll p;
   ll s = a[1];
   FOR(i, 2, n * n)
   {
      if (a[i] == a[i - 1])
      {
         s += a[i];
      }
      if (a[i] != a[i - 1])
      {
         p.push_back(s);
         s = a[i];
      }
      if (i == n * n)
      {
         p.push_back(s);
      }
   }
   sort(p.begin(), p.end());
   ll ans = 0;
   for (auto i : p)
   {
      ans += i;
   }
   cout << ans - p[0];
}

int main()
{
   /// written by ThanhTung
   OJ();
   // wfile();
   magicFunc();
   return 0;
}
/// loveyousomuchhh <3