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
ll n;
ll p[maxn], l[maxn], r[maxn], a[maxn];
ll ml, ms;
void magicFunc()
{
   cin >> n;
   p[0] = 0;
   FOR(i, 1, n)
   {
      cin >> a[i];
      p[i] = p[i - 1] + a[i];
      if (l[a[i]] == 0)
      {
         l[a[i]] = i;
      }
      r[a[i]] = i;
   }
   FOR(i, 1, 1000)
   {
      if (l[i] != 0)
      {
         if (r[i] - l[i] + 1 > ml)
         {
            ml = r[i] - l[i] + 1;
            ms = p[r[i]] - p[l[i] - 1];
         }
         else if (r[i] - l[i] + 1 == ml)
         {
            ms = max(ms, p[r[i]] - p[l[i] - 1]);
         }
      }
   }
   cout << ml << " " << ms;
}
int main()
{
   // #ifndef ONLINE_JUDGE
   freopen("exlist.inp", "r", stdin);
   freopen("exlist.out", "w", stdout);
   // #endif
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   // inp();
   magicFunc();
   return 0;
}