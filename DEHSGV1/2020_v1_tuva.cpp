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
ll n, d, a[maxn];
void magicFunc()
{
   cin >> n >> d;
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   ll pos = 0, ans = 0;
   FOR(i, 1, n)
   {
      if (a[i] == 1)
      {
         pos = i;
      }
      else
      {
         if (abs(pos - i) == d)
         {
            pos = i;
            ans++;
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