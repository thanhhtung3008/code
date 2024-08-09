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
vector<ll> a[100001];
ll par[100001];
bool visited[100001];
ll n, m, s, t;
void inp()
{
   cin >> n >> m >> s >> t;
   FOR(i, 1, m)
   {
      ll x, y;
      cin >> x >> y;
      // a[y].push_back(x);
      a[x].push_back(y);
   }
   FOR(i, 1, n)
   {
      sort(a[i].begin(), a[i].end());
      // reverse(a[i].begin(), a[i].end());
   }
   memset(visited, false, sizeof(visited));
   memset(par, 0, sizeof(par));
}
void dfs(ll u)
{
   visited[u] = true;
   for (auto i : a[u])
   {
      if (!visited[i])
      {
         par[i] = u;
         dfs(i);
      }
   }
}
void bfs(ll u)
{
   queue<ll> q;
   visited[u] = true;
   q.push(u);
   while (!q.empty())
   {
      ll v = q.front();
      q.pop();
      for (auto i : a[v])
      {
         if (!visited[i])
         {
            q.push(i);
            par[i] = v;
            visited[i] = true;
         }
      }
   }
}
void path(ll s, ll t)
{
   dfs(s);
   if (!visited[t])
   {
      cout << "NO";
   }
   else
   {
      vector<ll> pt;
      while (t != s)
      {
         pt.push_back(t);
         t = par[t];
      }
      pt.push_back(s);
      reverse(pt.begin(), pt.end());
      for (auto i : pt)
      {
         cout << i << " ";
      }
   }
}
void magicFunc()
{
   inp();
   path(s, t);
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
