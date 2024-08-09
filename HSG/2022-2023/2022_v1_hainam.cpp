/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 2e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
void magicFunc()
{
   vector<ll> p(maxn, 0);
   ll n, k;
   cin >> n >> k;
   ll ans = 0;
   FOR(i, 0, n - 1)
   {
      ll x, y;
      cin >> x >> y;
      p[y] = x;
      if (y > ans)
      {
         ans = y;
      }
   }
   ll s = 0;

   ll res = s;

   FOR(i, 0, ans)
   {
      s += p[i];
      if (i > 2 * k)
      {
         s = s - p[i - 2 * k - 1];
      }
      res = max(res, s);
   }
   cout << res;
}
int main()
{
#ifndef ONLINE_JUDGE
#endif
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   magicFunc();
   return 0;
}