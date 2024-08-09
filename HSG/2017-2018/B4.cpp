/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
void magicFunc()
{
   ll n, m, pos;
   cin >> n >> m;
   ll a[n + 1];
   FOR(i, 1, n)
   {
      ll x;
      cin >> x;
      if (x == m)
      {
         pos = i;
      }
      else if (x < m)
      {
         a[i] = -1;
      }
      else
      {
         a[i] = 1;
      }
   }
   map<ll, ll> mp;
   ll ans = 1;
   ll s = 0;
   FORD(i, pos - 1, 1)
   {
      s += a[i];
      if (s == 0)
      {
         ++ans;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
      }
      mp[s]++;
   }
   s = 0;
   FOR(i, pos + 1, n)
   {
      s += a[i];
      if (s == 0)
      {
         ++ans;
      }
      ans += mp[-s];
   }
   cout << ans;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   // freopen("input.inp", "r", stdin);
   // freopen("output.out", "w", stdout);
   magicFunc();
   return 0;
}
