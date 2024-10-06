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

#define TASK "dieukhien"

ll n, m, s, ans;

void solve()
{
   cin >> m >> n >> s;
   ll a[m + 2][n + 2];
   FOR(i, 1, m)
   {
      FOR(j, 1, n)
      {
         cin >> a[i][j];
      }
   }
   while (s--)
   {
      ll k;
      cin >> k;
      if (k > m)
      {
         k -= m;
         FOR(i, 1, m)
         {
            if (a[i][k] == 2)
            {
               a[i][k] = 0;
            }
            else
            {
               a[i][k]++;
            }
         }
      }
      else
      {
         FOR(i, 1, n)
         {
            if (a[k][i] == 2)
            {
               a[k][i] = 0;
            }
            else
            {
               a[k][i]++;
            }
         }
      }
   }
   FOR(i, 1, m)
   {
      FOR(j, 1, n)
      {
         if (a[i][j] == 0)
         {
            ans++;
         }
      }
   }
   cout << ans;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}