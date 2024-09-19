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

bool check(string n, ll k)
{
   ll nho = 0;
   for (char c : n)
   {
      nho = (nho * 10 + (c - 48)) % k;
   }
   return nho == 0;
}

void solve()
{
   ll k;
   cin >> k;
   queue<string> q;
   q.push("6");
   q.push("8");
   while (!q.empty())
   {
      string v = q.front();
      q.pop();
      if (check(v, k))
      {
         cout << v;
         break;
      }
      if (v.size() <= 200)
      {
         if (v.back() == '6')
         {
            q.push(v + "6");
         }
         else
         {
            q.push(v + "6");
            q.push(v + "8");
         }
      }
      else
      {
         cout << -1;
         break;
      }
   }
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine