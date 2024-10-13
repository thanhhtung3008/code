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

#define TASK "bosoi"

void solve()
{
   ll n, k, m;
   cin >> n >> k >> m;
   k--;
   vll stone(n);
   stone[0] = stone[1] = 1;
   ll ans = stone[0] + stone[1];
   FOR(i, 2, n - 1)
   {
      stone[i] = ans;
      ans += stone[i];
   }
   while (k--)
   {
      vll stones(n);
      stones[0] = stone[0] + 1;
      stones[1] = stone[1] + 1;
      ans = stones[0] + stones[1];
      FOR(i, 2, n - 1)
      {
         stones[i] = ans + stone[i];
         ans += stones[i];
      }
      stone = stones;
   }
   cout << stone[m - 1];
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}