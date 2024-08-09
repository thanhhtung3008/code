
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
   ll n;
   cin >> n;
   vector<ll> a(n);
   ll s = 0;
   FOR(i, 0, n - 1)
   {
      cin >> a[i];
      s += a[i];
   }
   if (round((double)s / n) == 5)
   {
      cout << 0;
      return;
   }
   ll dem = 0;
   sort(a.begin(), a.end());
   FOR(i, 0, n - 1)
   {
      s += (5 - a[i]);
      ++dem;
      if (round((double)s / n) == 5)
      {
         cout << dem;
         break;
      }
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