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
   for (ll i = 5; i * i <= n; i += 6)
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
   string s;
   cin >> s;
   vector<string> p;
   FOR(i, 0, s.size() - 1)
   {
      string ans = "";
      if (s[i] > '0' && s[i] <= '9')
      {
         FOR(j, i, s.size() - 1)
         {
            if (s[j] > '0' && s[j] <= '9')
            {
               ans = ans + s[j];
               if (check(stol(ans)))
               {
                  p.push_back(ans);
               }
            }
            else
            {
               break;
            }
         }
      }
   }
   cout << p.size() << endl;
   for (auto i : p)
   {
      cout << i << " ";
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