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
vector<ll> adj[1001];
ll par[100001];
ll color[100001];
ll in[1001];
void inp()
{
   cin >> n >> m;
   FOR(i, 0, m - 1)
   {
      ll x, y;
      cin >> x >> y;
      adj[x].push_back(y);
      in[y]++;
   }
   // memset(color, 0, sizeof(color));
} /*
 ll st, en;
 bool dfs(ll u)
 {
    color[u] = 1;
    for (auto v : adj[u])
    {
       if (color[v] == 0)
       {
          par[v] = u;
          if (dfs(v))
          {
             return true;
          }
       }
       else if (color[v] == 1)
       {
          st = v;
          en = u;
          return true;
       }
    }
    color[u] = 2;
    return false;
 }*/
bool kahn()
{
   queue<ll> q;
   FOR(i, 1, n)
   {
      if (in[i] == 0)
      {
         q.push(i);
      }
   }
   ll cnt = 0;
   while (!q.empty())
   {
      ll v = q.front();
      q.pop();
      ++cnt;
      for (auto x : adj[v])
      {
         in[x]--;
         if (!in[x])
         {
            q.push(x);
         }
      }
   }
   if (cnt == n)
   {
      return false;
   }
   return true;
}
void magicFunc()
{
   inp();
   /*
   FOR(i, 1, n)
   {
      if (color[i] == 0)
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
   cout << "NO";*/
   if (kahn())
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