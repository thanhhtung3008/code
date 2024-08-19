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

void chuanhoa(string &a, string &b)
{
   FOR(i, 0, a.size() - 1)
   {
      if (a[i] >= 'A' && a[i] <= 'Z')
      {
         a[i] = char(a[i] + 32);
      }
   }
   FOR(i, 0, b.size() - 1)
   {
      if (b[i] >= 'A' && b[i] <= 'Z')
      {
         b[i] = char(b[i] + 32);
      }
   }
}

void solve()
{
   string a, b;
   cin >> a >> b;
   chuanhoa(a, b);
   ll pos = 0;
   FOR(i, 1, min(a.size(), b.size()))
   {
      if (a.substr(a.size() - i, i) == b.substr(0, i))
      {
         pos = i;
      }
   }
   cout << a.size() + b.size() - pos;
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