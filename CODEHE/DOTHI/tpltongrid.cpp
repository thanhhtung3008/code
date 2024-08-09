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
void inp()
{
   cin >> n >> m;
   FOR(i, 1, n)
   {
      FOR(j, 1, m)
      {
         cin >> a[i][j];
      }
   }
}
void dfs(ll i, ll j)
{
   cout << i << " " << j << '\n';
   a[i][j] = 'o';
   FOR(k, 0, 3)
   {
      ll x = i + dx[k];
      ll y = j + dy[k];
      if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == 'x')
      {
         dfs(x, y);
      }
   }
}
void bfs(ll i, ll j)
{
   queue<pair<ll, ll>> q;
   q.push({i, j});
   a[i][j] = 'o';
   cout << i << " " << j << endl;
   while (!q.empty())
   {
      pair<ll, ll> v = q.front();
      q.pop();
      FOR(k, 0, 3)
      {
         ll x = v.ft + dx[k];
         ll y = v.sc + dy[k];
         if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == 'x')
         {
            cout << x << " " << y << endl;
            q.push({x, y});
            a[x][y] = 'o';
         }
      }
   }
}
void magicFunc()
{
   inp();
   ll cnt = 0;
   FOR(i, 1, n)
   {
      FOR(j, 1, m)
      {
         if (a[i][j] == 'x')
         {
            cout << cnt + 1 << ":\n";
            bfs(i, j);
            ++cnt;
         }
      }
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