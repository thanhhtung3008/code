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
bool visited[1001];
ll in[1001];
vector<ll> topo;
void inp()
{
   cin >> n >> m;
   ll x, y;
   FOR(i, 1, m)
   {
      cin >> x >> y;
      adj[x].push_back(y);
      in[y]++;
   }
   memset(visited, false, sizeof(visited));
}
void kahn()
{
   queue<ll> q;
   FOR(i, 1, n)
   {
      if (in[i] == 0)
      {
         q.push(i);
      }
   }
   while (!q.empty())
   {
      ll v = q.front();
      q.pop();
      topo.push_back(v);
      for (auto i : adj[v])
      {
         in[i]--;
         if (in[i] == 0)
         {
            q.push(i);
         }
      }
   }
   for (auto i : topo)
   {
      cout << i << " ";
   }
}
void magicFunc()
{
   inp();
   kahn();
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