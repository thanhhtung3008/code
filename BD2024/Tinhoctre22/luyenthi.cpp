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

#define TASK "luyenthi"

void solve()
{
   vp p;
   ll n, c;
   cin >> n >> c;
   FOR(i, 1, n)
   {
      ll a, b;
      cin >> a >> b;
      p.push_back({a, b});
   }
   ll ans = 0;
   sort(p.begin(), p.end());
   FOR(i, 0, n - 1)
   {
      if (p[i].ft <= c)
      {
         ans++;
         c += p[i].sc;
      }
      else
         break;
   }
   cout << ans;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}
