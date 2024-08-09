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
ll p[maxn];
ll dp1[maxn], dp2[maxn];
void try1()
{
   FOR(i, 1, n)
   {
      dp1[i] = 1;
   }
   FOR(i, 2, n)
   {
      FOR(j, 1, i - 1)
      {
         if (p[i] < p[j])
         {
            dp1[i] = max(dp1[i], dp1[j] + 1);
         }
      }
   }
}
void try2()
{
   FOR(i, 1, n)
   {
      dp2[i] = 1;
   }
   FORD(i, n - 1, 1)
   {
      FORD(j, n, i + 1)
      {
         if (p[i] < p[j])
         {
            dp2[i] = max(dp2[i], dp2[j] + 1);
         }
      }
   }
}
void magicFunc()
{
   cin >> n;
   FOR(i, 1, n)
   {
      cin >> p[i];
   }
   try1();
   try2();
   ll ans = 0;
   FOR(i, 1, n)
   {
      ans = max(ans, dp1[i] + dp2[i] - 1);
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