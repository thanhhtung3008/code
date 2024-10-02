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

void solve()
{
   string a, b;
   cin >> a >> b;
   ll n = a.size() - 1;
   ll l = 0, r = n;
   ll d = 0;
   while (l <= r)
   {
      if (a[l] == b[l])
      {
         // cout << a[l] << " ";
         d++;
      }
      if (l != r && a[r] == b[r])
      {
         // cout << a[r] << " " << b[r] << " " << r << " ";
         d++;
      }
      l++;
      r--;
      // cout << endl;
   }
   cout << d;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   // freopen(TASK ".inp", "r", stdin);
   // freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}