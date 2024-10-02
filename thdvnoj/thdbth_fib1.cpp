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

const long long maxn = 46;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "code"
ll f[maxn];

void ktao()
{
   f[0] = 1;
   f[1] = 1;
   FOR(i, 2, maxn - 1)
   {
      f[i] = f[i - 1] + f[i - 2];
   }
}

char tinh(ll n, ll k)
{
   if (n == 0)
   {
      return 'a';
   }
   if (n == 1)
   {
      return 'b';
   }
   if (k <= f[n - 2])
   {
      return tinh(n - 2, k);
   }
   else
   {
      return tinh(n - 1, k - f[n - 2]);
   }
}

void solve()
{
   ll t;
   cin >> t;
   ktao();
   while (t--)
   {
      ll n, k;
      cin >> n >> k;
      cout << tinh(n, k) << endl;
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