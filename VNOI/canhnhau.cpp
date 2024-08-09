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
vector<ll> adj[1001];
void inp()
{
   cin >> n >> m;
   FOR(i, 0, m - 1)
   {
      ll x, y;
      cin >> x >> y;
      if (x != y)
      {
         adj[x].push_back(y);
         adj[y].push_back(x);
      }
   }
}
void magicFunc()
{
   inp();
   FOR(i, 1, n)
   {
      for (auto v : adj[i])
      {
         cout << v << " ";
      }
      cout << 0 << "\n";
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
