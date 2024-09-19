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

const long long maxn = 1e6 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

ll a[maxn];

void solve()
{
   ll n, m, k;
   cin >> n >> m >> k;
   FOR(i, 1, n)
   {
      ll x;
      cin >> x;
      a[i] = a[i - 1] + x;
   }
   // sort(a + 1, a + n + 1);
   ll dem = 0;
   FOR(i, 1, n)
   {
      FOR(j, 0, i - 1)
      {
         if ((a[i] - a[j]) % k == 0)
         {
            dem++;
         }
      }
   }
   cout << dem;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen("BAI4.inp", "r", stdin);
   freopen("BAI4.out", "w", stdout);
   solve();
   return 0;
}