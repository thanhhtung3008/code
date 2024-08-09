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
ll n, l, r;
void magicFunc()
{
   cin >> n >> l >> r;
   vector<ll> prefix(n + 1, 0);
   vector<ll> a(n);
   FOR(i, 0, n - 1)
   {
      cin >> a[i];
   }
   FOR(i, 1, n)
   {
      prefix[i] = a[i - 1] + prefix[i - 1];
   }
   multiset<ll> m;
   m.insert(0);
   ll ans = 0;
   FOR(i, 1, n)
   {
      ll k = prefix[i];
      ll low = k - r;
      ll high = k - l;
      for (auto it = m.lower_bound(low); it != m.upper_bound(high); ++it)
      {
         if (l <= abs(k - *it) && abs(k - *it) <= r)
         {
            ans++;
         }
      }
      m.insert(k);
   }
   cout << ans;
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