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

bool chia(string n, ll m)
{
   ll nho = 0;
   for (auto c : n)
   {
      nho = (nho * 10 + (c - 48)) % m;
   }
   return nho == 0;
}

bool check(string n, ll m)
{
   if (m == 2)
   {
      return n[n.size() - 1] == '0' || n[n.size() - 1] == '2' || n[n.size() - 1] == '4' || n[n.size() - 1] == '6' || n[n.size() - 1] == '8';
   }
   else if (m == 4)
   {
      return n.size() >= 2 && stoll(n.substr(n.size() - 2)) % 4 == 0;
   }
   else if (m == 3)
   {
      ll s = 0;
      for (auto c : n)
      {
         s += (c - 48);
      }
      return s % 3 == 0;
   }
   else if (m == 6)
   {
      return check(n, 2) && check(n, 3);
   }
   else if (m == 8)
   {
      return n.size() >= 3 && stoll(n.substr(n.size() - 3)) % 8 == 0;
   }
   else if (m == 10)
   {
      return n[n.size() - 1] == '0';
   }
   return false;
}

void solve()
{
   string n;
   ll m;
   cin >> n >> m;
   sort(n.begin(), n.end(), greater<char>());
   do
   {
      if (check(n, m))
      {
         cout << n;
         return;
      }
   } while (prev_permutation(n.begin(), n.end()));
   cout << 0;
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