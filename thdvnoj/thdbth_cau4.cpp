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

bool check[maxn];
ll dp[maxn];

void ktao()
{
   memset(check, true, sizeof(check));
   check[0] = check[1] = false;
   FOR(i, 2, sqrt(maxn))
   {
      if (check[i])
      {
         for (ll j = i * i; j <= maxn; j += i)
         {
            check[j] = false;
         }
      }
   }
   FOR(i, 2, maxn)
   {
      dp[i] = dp[i - 1] + check[i];
   }
}

void solve()
{
   ktao();
   ll n;
   cin >> n;
   FOR(i, 1, n)
   {
      ll x;
      cin >> x;
      cout << dp[x] << " ";
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