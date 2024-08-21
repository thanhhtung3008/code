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

string xau(string s, unordered_set<string> d)
{

   ll n = s.size();
   bool dp[n + 1] = {0};
   vll prev(n + 1, -1);
   dp[0] = true;
   FOR(i, 1, n)
   {
      FOR(j, 0, i - 1)
      {
         if (dp[j] && d.find(s.substr(j, i - j)) != d.end())
         {
            dp[i] = true;
            prev[i] = j;
            break;
         }
      }
   }
   if (!dp[n])
   {
      return "-1";
   }
   string kq;
   ll idx = n;
   while (idx > 0)
   {
      string t = s.substr(prev[idx], idx - prev[idx]);
      if (!kq.empty())
      {
         kq = t + " " + kq;
      }
      else
      {
         kq = t;
      }
      idx = prev[idx];
   }
   return kq;
}

void solve()
{
   ll n;
   cin >> n;
   unordered_set<string> d;
   FOR(i, 1, n)
   {
      string k;
      cin >> k;
      d.insert(k);
   }
   ll q;
   cin >> q;
   while (q--)
   {
      string x;
      cin >> x;
      cout << xau(x, d) << endl;
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