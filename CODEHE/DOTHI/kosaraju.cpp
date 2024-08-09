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
ll n, m;
vector<ll> adj[100001];
vector<ll> radj[100001];
ll visited[100001];
stack<ll> st;
void inp()
{
   cin >> n >> m;
   FOR(i, 0, m - 1)
   {
      ll x, y;
      cin >> x >> y;
      adj[x].push_back(y);
      radj[y].push_back(x);
   }
}
void dfs1(ll u)
{
   visited[u] = true;
   for (auto i : adj[u])
   {
      if (!visited[i])
      {
         dfs1(i);
      }
   }
   cout << u << " ";
   st.push(u);
}
void dfs2(ll u)
{
   visited[u] = true;
   cout << u << " ";
   for (auto i : radj[u])
   {
      if (!visited[i])
      {
         dfs2(i);
      }
   }
}
void magicFunc()
{
   memset(visited, false, sizeof(visited));
   FOR(i, 1, n)
   {
      if (!visited[i])
      {
         dfs1(i);
      }
   }
   cout << endl;
   // vector<ll> paths;
   ll cnt = 0;
   memset(visited, false, sizeof(visited));
   while (!st.empty())
   {
      ll u = st.top();
      st.pop();
      if (!visited[u])
      {
         // paths.push_back(u);
         dfs2(u);
         ++cnt;
         cout << endl;
      }
   }
   if (cnt == 1)
   {
      cout << "YES";
   }
   else
   {
      cout << "NO\n";
      // cout << paths[1] << " " << paths[0];
   }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   //  freopen("input.inp", "r", stdin);
   //  freopen("output.out", "w", stdout);
   inp();
   magicFunc();
   return 0;
}