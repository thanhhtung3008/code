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

ll tinh(ll x1, ll y1, ll x2, ll y2)
{
   return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

void solve()
{
   ll x1, x2, x3, y1, y2, y3;
   cin >> x1 >> y1;
   cin >> x2 >> y2;
   cin >> x3 >> y3;
   ll AB2 = tinh(x1, y1, x2, y2);
   ll AC2 = tinh(x1, y1, x3, y3);
   ll BC2 = tinh(x2, y2, x3, y3);
   if (sqrt(AB2) + sqrt(AC2) <= sqrt(BC2) || sqrt(AB2) + sqrt(BC2) <= sqrt(AC2) || sqrt(AC2) + sqrt(BC2) <= sqrt(AB2))
   {
      cout << "khong la tam giac";
   }
   else if (AB2 + BC2 == AC2 || AB2 + AC2 == BC2 || AC2 + BC2 == AB2)
   {
      cout << "vuong";
   }
   else if (AB2 == AC2 || AB2 == BC2 || AC2 == BC2)
   {
      cout << "can";
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