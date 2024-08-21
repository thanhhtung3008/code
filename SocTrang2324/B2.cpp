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
   string a, s;
   string b;
   string k;
   cin >> a;
   unordered_map<char, ll> m;
   for (char c : a)
   {
      if (c >= '0' && c <= '9')
      {
         k = k + c;
      }
   }
   while (k[0] == '0' && k[1] == '0')
   {
      k.erase(0, 1);
   }
   ll kq = stoll(k.substr(0, 2));
   while (cin >> b)
   {
      s = s + b;
   }
   for (char c : s)
   {
      m[c]++;
   }
   for (char c : s)
   {
      if (m[c] <= kq)
      {
         cout << c;
      }
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