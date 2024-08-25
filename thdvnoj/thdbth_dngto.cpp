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

ll tinh(ll l, ll r)
{
   vector<bool> nt(r - l + 1, true);
   FOR(i, 2, sqrt(r))
   {
      ll bd = max(i * i, (i + l - 1) / i * i);
      for (ll j = bd; j <= r; j += i)
      {
         nt[j - l] = false;
      }
   }
   if (1 >= l)
      nt[1 - l] = false;
   ll dem = 0;
   FOR(i, l, r)
   {
      if (nt[i - l])
      {
         dem++;
      }
   }
   return dem;
}

void solve()
{
   ll q;
   cin >> q;
   while (q--)
   {
      ll l, r;
      cin >> l >> r;
      cout << tinh(l, r) << endl;
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