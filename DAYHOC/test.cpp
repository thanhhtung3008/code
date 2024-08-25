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

void solve()
{
   ll n, k;
   cin >> n >> k;
   vll a(n), dp(n, 1);
   FOR(i, 0, n - 1)
   {
      cin >> a[i];
   }
   ll maxx = 1;
   ll pos;
   FOR(i, 0, n - 1)
   {
      FORD(j, i - 1, 0)
      {
         if (abs(a[i] - a[j]) <= k)
         {
            dp[i] = max(dp[i], dp[j] + 1);
         }
      }
      if (dp[i] > maxx)
      {
         maxx = dp[i];
         pos = i;
      }
   }
   if (maxx == 1)
   {
      cout << -1;
      return;
   }
   cout << maxx << endl;
   vll p;
   for (ll i = pos; i >= 0 && maxx > 0; i--)
   {
      if (dp[i] == maxx)
      {
         p.push_back(a[i]);
         maxx--;
      }
   }
   reverse(p.begin(), p.end());
   for (auto i : p)
   {
      cout << i << " ";
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