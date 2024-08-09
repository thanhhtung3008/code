
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
void magicFunc()
{
   ll n, m;
   cin >> n >> m;
   vector<ll> a(n, 0);
   vector<ll> b(n, 0);
   FOR(i, 0, n - 1)
   {
      cin >> a[i];
   }
   FOR(i, 0, m - 1)
   {
      cin >> b[i];
   }
   vector<ll> f(n + 1, 0);
   FOR(i, 0, m - 1)
   {
      f[i] += b[i];
      if (i + m < n)
      {
         f[i + m] -= b[i];
      }
   }
   a[0] += f[0];
   FOR(i, 1, n - 1)
   {
      f[i] += f[i - 1];
      a[i] += f[i];
   }
   FOR(i, 0, n - 1)
   {
      cout << a[i] << " ";
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