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

ll b[maxn], v[maxn];

void ktao()
{
   FOR(i, 1, sqrt(maxn))
   {
      b[i * i]++;
      v[i * i] += i;
      for (ll j = i + 1; j <= maxn / i; j++)
      {
         b[i * j] += 2;
         v[i * j] += (i + j);
      }
   }
   FOR(i, 1, maxn)
   {
      b[i] += b[i - 1];
      v[i] += v[i - 1];
   }
}

void solve()
{
   ktao();
   ll t;
   cin >> t;
   while (t--)
   {
      ll l, r;
      cin >> l >> r;
      cout << b[r] - b[l - 1] << " " << v[r] - v[l - 1] << endl;
   }
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