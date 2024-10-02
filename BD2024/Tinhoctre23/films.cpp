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

const long long maxn = 1e6 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "films"

bool cmp(pll a, pll b)
{
   return a.sc < b.sc;
}

void solve()
{
   ll n;
   cin >> n;
   vp p;
   FOR(i, 0, n - 1)
   {
      ll x, y;
      cin >> x >> y;
      p.push_back({x, y});
   }
   sort(p.begin(), p.end(), cmp);
   ll d = 0, x = 0;
   FOR(i, 0, n - 1)
   {
      if (p[i].ft >= x)
      {
         x = p[i].sc;
         d++;
      }
   }
   cout << d;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}
