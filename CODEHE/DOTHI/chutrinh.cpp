/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
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
ll n, m;
vector<ll> adj[100001];
ll par[100001];
bool visited[100001];
void inp()
{
   cin >> n >> m;
   FOR(i, 0, m - 1)
   {
      ll x, y;
      cin >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(x);
   }
   memset(visited, false, sizeof(visited));
}
ll st, en;
bool dfs(ll u)
{
   visited[u] = true;
   for (auto i : adj[u])
   {
      if (!visited[i])
      {
         par[i] = u;
         if (dfs(i))
         {
            return true;
         }
      }
      else if (i != par[u])
      {
         st = i;
         en = u;
         return true;
      }
   }
   return false;
}
bool bfs(ll u)
{
   visited[u] = true;
   queue<ll> q;
   q.push(u);
   while (!q.empty())
   {
      ll v = q.front();
      q.pop();
      for (auto i : adj[v])
      {
         if (!visited[i])
         {
            par[i] = v;
            q.push(i);
            visited[i] = true;
         }
         else if (i != par[v])
         {
            return true;
         }
      }
   }
   return false;
}
void magicFunc()
{
   inp();
   FOR(i, 1, n)
   {
      if (!visited[i])
      {
         if (dfs(i))
         {
            cout << "YES\n";
            vector<ll> path;
            while (st != en)
            {
               path.push_back(en);
               en = par[en];
            }
            path.push_back(st);
            reverse(path.begin(), path.end());
            for (auto i : path)
            {
               cout << i << " ";
            }
            return;
         }
      }
   }
   cout << "NO";
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