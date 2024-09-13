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

ll dp[100000001];
bool check[10000001];

ll tinh(ll n)
{
   ll s = 0;
   while (n)
   {
      s += (n % 10);
      n /= 10;
   }
   return s;
}

void ktao()
{
   memset(check, true, sizeof(check));
   check[0] = check[1] = false;
   FOR(i, 2, sqrt(10000001))
   {
      if (check[i])
      {
         for (ll j = i * i; j <= 10000001; j += i)
         {
            check[j] = false;
         }
      }
   }

   FOR(i, 2, 100000001)
   {
      dp[i] = dp[i - 1];
      ll k = tinh(i);
      if (check[k])
      {
         dp[i]++;
      }
   }
}

void solve()
{
   ll a, b;
   cin >> a >> b;
   ktao();
   ll ans = 0;
   cout << dp[b] - dp[a - 1];
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine