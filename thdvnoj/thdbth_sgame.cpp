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

const long long maxn = 1e5 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "code"

ll n, a[maxn], b[maxn];
ll i = 1, j = 1, ans = INT_MAX;

void solve()
{
   cin >> n;
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   FOR(i, 1, n)
   {
      cin >> b[i];
   }
   sort(a + 1, a + n + 1, greater<ll>());
   sort(b + 1, b + n + 1);
   while (i <= n && j <= n)
   {
      ans = min(ans, abs(a[i] + b[j]));
      if (a[i] + b[j] > 0)
      {
         i++;
      }
      else if (a[i] + b[j] < 0)
      {
         j++;
      }
      else
      {
         break;
      }
   }
   cout << ans;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   // freopen(TASK ".inp", "r", stdin);
   // freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}