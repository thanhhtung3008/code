/* Author : Nguyen Thanh Tung - Tran Hung Dao High School for Gifted Student */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ft first
#define sc second
#define ll long long
#define vll vector<ll>
#define vp vector<pll>
#define pll pair<ll, ll>
#define ull unsigned long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const long long maxn = 500005;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "code"

vll adj[maxn];
void bfs(ll s, ll kc[], ll n)
{
   vector<bool> visited(n + 1, 0);
   queue<ll> q;
   q.push(s);
   kc[s] = 0;
   visited[s] = true;
   while (!q.empty())
   {
      ll u = q.front();
      q.pop();
      for (ll v : adj[u])
      {
         if (!visited[v])
         {
            // cout << u << " " << v << endl;
            kc[v] = kc[u] + 1;
            q.push(v);
            visited[v] = true;
         }
      }
   }
}

void solve()
{
   ll n, m, k;
   cin >> n >> m >> k;
   FOR(i, 1, n)
   {
      adj[i].clear();
   }
   ll x, y;
   FOR(i, 1, m)
   {
      cin >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(x);
   }
   ll kc1[n + 1], kcn[n + 1];
   bfs(1, kc1, n);
   bfs(n, kcn, n);
   set<pll> canh;
   ll ans = 0;
   FOR(i, 1, n)
   {
      for (auto j : adj[i])
      {
         if (i < j)
         {
            canh.insert({i, j});
         }
      }
   }
   FOR(i, 1, n)
   {
      FOR(j, i + 1, n)
      {
         if (canh.find({i, j}) == canh.end())
         {
            ll d1 = kc1[i] + kcn[j] + 1;
            ll d2 = kc1[j] + kcn[i] + 1;
            if (min(d1, d2) == k)
            {
               ans++;
            }
         }
      }
   }
   cout << ans;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   // freopen(TASK ".inp", "r", stdin);
   // freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine