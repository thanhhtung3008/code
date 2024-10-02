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

string tru(string a, string b)
{
   while (a.size() < b.size())
   {
      a = "0" + a;
   }
   while (a.size() > b.size())
   {
      b = "0" + b;
   }
   bool check = false;
   if (a < b)
   {
      swap(a, b);
      check = true;
   }
   ll nho = 0;
   string s = "";
   FORD(i, a.size() - 1, 0)
   {
      ll v1 = a[i] - 48;
      ll v2 = b[i] - 48;
      ll k = v1 - v2 - nho;
      if (k < 0)
      {
         k += 10;
         nho = 1;
      }
      else
      {
         nho = 0;
      }
      s = char(k % 10 + 48) + s;
   }
   while (s[0] == '0')
   {
      s.erase(0, 1);
   }
   if (check)
   {
      s = "-" + s;
   }
   return s;
}
ll tcs(string n)
{
   ll s = 0;
   FOR(i, 0, n.size() - 1)
   {
      s += (n[i] - 48);
   }
   return s;
}

void solve()
{
   string n;
   cin >> n;
   // cout << tru("3", "9");
   string m;
   bool check = false;
   FOR(i, 0, n.size() * 9)
   {
      m = tru(n, to_string(i));
      if (m >= "0" && tcs(m) == i)
      {
         check = true;
         break;
      }
   }
   if (!check)
   {
      cout << -1;
   }
   else
   {
      cout << m;
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
