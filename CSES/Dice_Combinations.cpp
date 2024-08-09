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
int n, dp[maxn];
void magicFunc()
{
   cin >> n;
   dp[0] = 1;
   for (int i = 1; i <= n; ++i)
   {
      for (int j = max(0, i - 6); j <= i - 1; ++j)
      {
         dp[i] = (dp[i] + dp[j]) % MOD;
      }
      // cout << dp[i] << " ";
   }
   cout << dp[n];
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