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

const long long maxn = 3e6 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "code"

ll n;

bool check(ll n)
{
   if (n < 2)
   {
      return false;
   }
   if (n == 2 || n == 3)
   {
      return true;
   }
   if (n % 2 == 0 || n % 3 == 0)
   {
      return false;
   }
   for (ll i = 5; i <= sqrt(n); i += 6)
   {
      if (n % i == 0 || n % (i + 2) == 0)
      {
         return false;
      }
   }
   return true;
}

void solve()
{
   cin >> n;
   bool checkk = false;
   FOR(b, 2, sqrt(n))
   {
      if (check(b) && check(2 * 2 + b * b))
      {
         cout << 2 << " " << b << " " << 2 * 2 + b * b << endl;
         checkk = true;
      }
   }
   if (!checkk)
   {
      cout << -1;
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