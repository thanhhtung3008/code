#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 2e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
void magicFunc()
{
   unordered_map<ll, ll> m;
   ll n;
   cin >> n;
   ll a[n + 1];
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   ll ans = 0;
   FOR(i, 2, n - 1)
   {
      m[a[i - 1]]++;
      FOR(j, i + 1, n)
      {
         if (m.find(abs(a[j] - a[i])) != m.end())
         {
            ans += m[abs(a[j] - a[i])];
         }
         if (m.find(a[i] + a[j]) != m.end())
         {
            ans += m[a[i] + a[j]];
         }
      }
      m.clear();
   }
   cout << ans;
}
int main()
{
#ifndef ONLINE_JUDGE
#endif
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   magicFunc();
   return 0;
}
