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

ll a[1003][1003];
ll pre[1003][1003];

void solve()
{
   ll n, k;
   cin >> n >> k;
   FOR(i, 1, n)
   {
      FOR(j, 1, n)
      {
         cin >> a[i][j];
      }
   }
   FOR(i, 1, n)
   {
      FOR(j, 1, n)
      {
         pre[i][j] = a[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
      }
   } /*
    FOR(i, 1, n)
    {
       FOR(j, 1, n)
       {
          cout << pre[i][j] << " ";
       }
       cout << endl;
    }*/
   ll ans = INT_MIN;
   FOR(i, 1, n - k + 1)
   {
      FOR(j, 1, n - k + 1)
      {
         ans = max(ans, pre[i + k - 1][j + k - 1] + pre[i - 1][j - 1] - pre[i - 1][j + k - 1] - pre[i + k - 1][j - 1]);
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
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine