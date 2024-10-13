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

#define TASK "tong"

string cong(string a, string b)
{
   while (a.size() < b.size())
   {
      a = "0" + a;
   }
   while (a.size() > b.size())
   {
      b = "0" + b;
   }
   string s = "";
   ll nho = 0;
   FORD(i, a.size() - 1, 0)
   {
      ll v1 = a[i] - 48;
      ll v2 = b[i] - 48;
      ll k = v1 + v2 + nho;
      s = char(k % 10 + 48) + s;
      nho = k / 10;
   }
   if (nho != 0)
   {
      s = "1" + s;
   }
   return s;
}

void solve()
{
   string s;
   FOR(i, 1, 4)
   {
      string n;
      cin >> n;
      if ((n[n.size() - 1] - 48) % 2 == 0)
      {
         s = cong(s, n);
      }
   }
   cout << s;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}