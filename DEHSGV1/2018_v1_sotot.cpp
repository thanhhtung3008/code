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
ll tong(ll n)
{
   ll s = 0;
   while (n)
   {
      s += (n % 10);
      n /= 10;
   }
   return s;
}
void magicFunc()
{
   ll n;
   cin >> n;
   ll ans = 0;
   FOR(i, 1, sqrt(n))
   {
      if (n % i == 0)
      {
         if (tong(i) > tong(ans))
         {
            ans = i;
         }
         if (i != n / i && tong(n / i) > tong(ans))
         {
            ans = n / i;
         }
         if (tong(i) == tong(ans))
         {
            ans = min(ans, i);
         }
         if (i != n / i && tong(n / i) == tong(ans))
         {
            ans = min(ans, n / i);
         }
      }
   }
   cout << ans;
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