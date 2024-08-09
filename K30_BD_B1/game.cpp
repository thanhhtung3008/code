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
ll n, m, a[1001][1001];
ll dp[1003][1003], dp1[1003][1003];
void magicFunc()
{
   cin >> n >> m;
   ll b;
   cin >> b;
   FOR(i, 1, n)
   {
      FOR(j, 1, m)
      {
         cin >> a[i][j];
      }
   }
   FOR(i, 1, m)
   {
      dp[1][i] = b + a[1][i];
      dp1[1][i] = b + a[1][i];
   }
   FOR(i, 0, n)
   {
      dp1[i][0] = INT_MAX;
      dp1[i][m + 1] = INT_MAX;
      dp[i][0] = INT_MIN;
      dp[i][m + 1] = INT_MIN;
   }
   FOR(i, 2, n)
   {
      FOR(j, 1, m)
      {
         dp[i][j] = max({dp[i - 1][j], dp[i - 1][j - 1], dp[i - 1][j + 1]}) + a[i][j];
         if (a[i][j] == 0)
         {
            dp1[i][j] = min({dp1[i - 1][j], dp1[i - 1][j - 1], dp1[i - 1][j + 1]}) - min({dp1[i - 1][j], dp1[i - 1][j - 1], dp1[i - 1][j + 1]}) / 2;
         }
         else
         {
            dp1[i][j] = min({dp1[i - 1][j], dp1[i - 1][j - 1], dp1[i - 1][j + 1]}) + a[i][j];
         }
      }
   }
   cout << *min_element(dp1[n] + 1, dp1[n] + m + 1) << '\n';
   cout << *max_element(dp[n] + 1, dp[n] + m + 1);
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