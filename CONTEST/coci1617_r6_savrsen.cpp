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

const long long maxn = 1e7 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "code"

ull dp[maxn], u[maxn];

void ktao()
{
   for (ull i = 1; i <= sqrt(maxn); i++)
   {
      u[i * i] += i;
      for (ull j = i + 1; j <= maxn / i; j++)
      {
         u[i * j] += (i + j);
      }
   }
   for (ll i = 1; i <= maxn; i++)
   {
      dp[i] = abs(2 * i - (ll)u[i]) + dp[i - 1];
   }
}

void solve()
{
   ktao();
   ull a, b;
   cin >> a >> b;
   cout << dp[b] - dp[a - 1];
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   // freopen(TASK ".inp", "r", stdin);
   // freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}