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
   ll t;
   cin >> t;
   while (t--)
   {
      ll n;
      cin >> n;
      vector<ll> a(n);
      FOR(i, 0, n - 1)
      {
         cin >> a[i];
      }
      ll l = 0, r = n - 1, sl = 0, sr = 0;
      ll ans = 0;
      while (l <= r)
      {
         if (sl < sr)
         {
            sl += a[l];
            l++;
         }
         else
         {
            sr += a[r];
            --r;
         }
         if (sl == sr)
         {
            ans = max(ans, l + (n - 1 - r));
         }
      }
      cout << ans << "\n";
   }
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