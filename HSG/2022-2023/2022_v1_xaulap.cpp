/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll tinh(string s, string t)
{
   ll a = s.size();
   ll b = t.size();
   ll k = 0, pos = 0;
   FOR(i, 0, b - 1)
   {
      if (t[i] == s[pos])
      {
         pos++;
         if (pos == a)
         {
            pos = 0;
            k++;
         }
      }
   }
   return k;
}
void magicFunc()
{
   string s, t;
   cin >> s >> t;
   if (tinh(s, t) == 0)
   {
      cout << -1;
   }
   else
   {
      cout << tinh(s, t);
   }
}
int main()
{
#ifndef ONLINE_JUDGE
#endif
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   magicFunc();
   return 0;
}