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

const long long maxn = 1001;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "code"

struct edge
{
   ll u, v;
   ll w;
};

ll n, m;
ll par[maxn], sz[maxn];
vector<edge> canh;

void make_set()
{
   FOR(i, 1, n)
   {
      par[i] = i;
      sz[i] = 1;
   }
}

ll find(ll t)
{
   if (t == par[t])
   {
      return t;
   }
   return par[t] = find(par[t]);
}

bool Union(ll a, ll b)
{
   a = find(a);
   b = find(b);
   if (a == b)
   {
      return false;
   }
   if (sz[a] < sz[b])
   {
      swap(a, b);
   }
   par[b] = a;
   sz[a] += sz[b];
   return true;
}

void inp()
{
   cin >> n >> m;
   FOR(i, 0, m - 1)
   {
      ll x, y, w;
      cin >> x >> y >> w;
      edge e = edge({x, y, w});
      canh.push_back(e);
   }
}

bool cmp(edge a, edge b)
{
   return a.w < b.w;
}

void kruskal()
{
   vector<edge> mst;
   ll d = 0;
   sort(canh.begin(), canh.end(), cmp);
   FOR(i, 0, m - 1)
   {
      if (mst.size() == n - 1)
      {
         break;
      }
      edge e = canh[i];
      if (Union(e.u, e.v))
      {
         mst.push_back(e);
         d += e.w;
      }
   }
   if (mst.size() != n - 1)
   {
      cout << "Khong lien thong";
   }
   else
   {
      cout << "MST: " << d << endl;
      for (auto i : mst)
      {
         cout << i.u << " " << i.v << " " << i.w << endl;
      }
   }
}

void solve()
{
   inp();
   make_set();
   kruskal();
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