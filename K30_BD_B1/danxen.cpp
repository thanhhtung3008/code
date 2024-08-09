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
ll n, a[maxn], b[maxn];
void magicFunc()
{
   cin >> n;
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   FOR(i, 1, n)
   {
      cin >> b[i];
   }
   ll t = INT_MIN, d = INT_MIN;
   if (b[1] == 2)
   {
      t = a[1];
   }
   else
   {
      d = a[1];
   }
   FOR(i, 2, n)
   {
      if (b[i] == 2)
      {
         t = max({t, d + a[i], a[i]});
      }
      else
      {
         d = max({d, t + a[i], a[i]});
      }
   }
   cout << max(t, d);
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