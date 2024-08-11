/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define vll vector<ll>
#define vp vector<pll>
#define pll pair<ll, ll>
#define ull unsigned long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

void wfile()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
}

void OJ()
{
#ifndef ONLINE_JUDGE
#endif
}

string s;
ll tinh(string s)
{
   ll kq = 0;
   FOR(i, 0, s.size() - 1)
   {
      kq += ((s[i] - 48) * (i + 1));
   }
   return kq;
}
void magicFunc()
{
   cin >> s;
   ll pos = s.find('?');
   bool check = false;
   for (char c = '0'; c <= '9'; ++c)
   {
      if (pos == 0 && c == '0')
      {
         continue;
      }
      s[pos] = c;
      ll kq = tinh(s);
      if (kq % 7 == 0)
      {
         cout << c;
         check = true;
         break;
      }
   }
   if (!check)
   {
      cout << -1;
   }
}

int main()
{
   /// written by ThanhTung
   OJ();
   // wfile();
   magicFunc();
   return 0;
}
/// loveyousomuchhh <3