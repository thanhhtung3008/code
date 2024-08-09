/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 5000001;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll n, d;
ll uoc[maxn];
void uocnt()
{
   FOR(i, 1, sqrt(maxn))
   {
      uoc[i * i] += i;
      for (ll j = i + 1; j <= maxn / i; j++)
      {
         uoc[i * j] += (i + j);
      }
   }
}
void magicFunc()
{
   uocnt();
   cin >> n >> d;
   ll ans = 0;
   FOR(i, 1, n)
   {
      if (abs(uoc[i] - i - i) <= d)
      {
         ++ans;
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