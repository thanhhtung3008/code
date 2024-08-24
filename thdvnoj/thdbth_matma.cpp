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
   string s;
   getline(cin, s);
   string res = "";
   vll p;
   unordered_map<ll, ll> m;
   ll dem = 0;
   FOR(i, 0, s.size() - 1)
   {
      if (s[i] >= '0' && s[i] <= '9')
      {
         res = res + s[i];
         if (s[i + 1] < '0' || s[i + 1] > '9' || i == s.size() - 1)
         {
            m[stoll(res)]++;
            dem++;
            res = "";
         }
      }
   }
   if (dem == 0)
   {
      cout << -1;
      return;
   }

   ll ans = 0;
   for (auto i : m)
   {
      if (i.sc > m[ans])
      {
         ans = i.ft;
      }
      else if (i.sc == m[ans])
      {
         if (i.ft > ans)
         {
            ans = i.ft;
         }
      }
   }
   cout << dem << " " << ans << " " << m[ans];
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