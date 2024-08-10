/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)
#define pll pair<ll, ll>

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e8 + 7;
ll n, m;
char a[1003][1003];
ll dx[4] = {1, -1, 0, 0};
ll dy[4] = {0, 0, 1, -1};
ll dp[1003][1003], f[1003][1003];
void magicFunc()
{
   cin >> n >> m;
   FOR(i, 1, n)
   {
      FOR(j, 1, m)
      {
         cin >> a[i][j];
         dp[i][j] = 1e9;
      }
   }
   dp[1][1] = 0;
   f[1][1] = 1;
   queue<pll> q;
   q.push({1, 1});
   while (q.size())
   {
      ll u = q.front().ft;
      ll v = q.front().sc;
      q.pop();
      FOR(i, 0, 3)
      {
         ll nu = dx[i] + u;
         ll nv = v + dy[i];
         if (1 <= nu && nu <= n && 1 <= nv && nv <= m && a[nu][nv] == '1')
         {
            if (dp[nu][nv] > dp[u][v] + 1)
            {
               dp[nu][nv] = dp[u][v] + 1;
               f[nu][nv] = f[u][v];
               q.push({nu, nv});
            }
            else if (dp[nu][nv] == dp[u][v] + 1)
            {
               (f[nu][nv] += f[u][v]) %= MOD;
            }
         }
      }
   }
   cout << f[n][m] << '\n';
   cout << dp[n][m];
}
int main()
{
   freopen("ant.inp", "r", stdin);
   freopen("ant.out", "w", stdout);
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   magicFunc();
   // bfs();
   return 0;
}