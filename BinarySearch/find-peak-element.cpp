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

#define TASK "code"

ll peak(ll l, ll r, vll a)
{
   ll ans = -1;
   while (l <= r)
   {
      ll m = (l + r) / 2;
      if (a[m] > a[m - 1] && a[m] > a[m + 1])
      {
         ans = m;
         break;
      }
      else if (a[m] > a[m - 1] && a[m] < a[m + 1])
      {
         l = m + 1;
      }
      else
      {
         r = m - 1;
      }
   }
   return ans;
}

void solve()
{
   ll n;
   cin >> n;
   vll a(n);
   FOR(i, 0, n - 1)
   {
      cin >> a[i];
   }
   if (peak(0, n - 1, a) != -1)
   {
      cout << peak(0, n - 1, a);
   }
   else
   {
      cout << max_element(a.begin(), a.end()) - a.begin();
   }
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