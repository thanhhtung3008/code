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
ll dx[4] = {-1, 0, 0, 1};
ll dy[4] = {0, -1, 1, 0};
char a[1001][1001];
ll n, m;
bool bfs(ll i, ll j)
{
   queue<pair<ll, ll>> q;
   q.push({i, j});
   a[i][j] = 'x';
   while (!q.empty())
   {
      pair<ll, ll> v = q.front();
      q.pop();
      FOR(k, 0, 3)
      {
         ll x = v.ft + dx[k];
         ll y = v.sc + dy[k];
         if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] != 'x')
         {
            if (a[x][y] == 'B')
            {
               return true;
            }
            q.push({x, y});
            a[x][y] = 'x';
         }
      }
   }
   return false;
}
bool dfs(ll i, ll j)
{
   if (a[i][j] == 'B')
   {
      return true;
   }
   a[i][j] = 'x';
   FOR(k, 0, 3)
   {
      ll x = i + dx[k];
      ll y = j + dy[k];
      if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] != 'x')
      {
         if (dfs(x, y))
         {
            return true;
         }
      }
   }
   return false;
}
void magicFunc()
{
   ll x1, y1;
   ll u, v;
   cin >> n >> m;
   FOR(i, 1, n)
   {
      FOR(j, 1, m)
      {
         cin >> a[i][j];
         if (a[i][j] == 'A')
         {
            x1 = i;
            y1 = j;
         }
         else if (a[i][j] == 'B')
         {
            u = i;
            v = j;
         }
      }
   }
   if (dfs(x1, y1))
   {
      cout << "YES";
   }
   else
   {
      cout << "NO";
   }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
   magicFunc();
   return 0;
}