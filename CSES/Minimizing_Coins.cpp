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
ll n, x, a[maxn], dp[maxn];
void magicFunc()
{
   cin >> n >> x;
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   dp[0] = 0;
   FOR(s, 1, x)
   {
      dp[s] = 1e9;
      FOR(j, 1, n)
      {
         if (s >= a[j])
         {
            dp[s] = min(dp[s], dp[s - a[j]] + 1);
         }
      }
   }
   if (dp[x] == 1e9)
   {
      cout << -1;
   }
   else
   {
      cout << dp[x];
   }
}
int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
#endif
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   magicFunc();
   return 0;
}