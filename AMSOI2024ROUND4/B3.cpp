
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
   vector<ll> dp(n, 1);
   FOR(i, 0, n - 1)
   {
      cin >> a[i];
   }
   ll s = 0;
   FOR(i, 1, n - 1)
   {
      FOR(j, 0, i - 1)
      {
         if ((a[i] - a[j]) * (a[j] - a[i]) >= 0)
         {
            dp[i] = (dp[i] + dp[j]) % MOD;
         }
      }
   }
   FOR(i, 0, n - 1)
   {
      s = (s + dp[i]) % MOD;
   }
   cout << s;
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