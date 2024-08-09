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
void magicFunc()
{
   ll q;
   cin >> q;
   while (q--)
   {
      ll n;
      cin >> n;
      map<string, bool> m;
      vector<string> s(n);
      FOR(i, 0, n - 1)
      {
         cin >> s[i];
         m[s[i]] = 1;
      }
      FOR(i, 0, n - 1)
      {
         bool check = 0;
         FOR(j, 1, s[i].size() - 1)
         {
            string k = s[i].substr(0, j);
            string h = s[i].substr(j, s[i].size() - j);
            if (m[k] == 1 && m[h] == 1)
            {
               check = 1;
            }
         }
         cout << check;
      }
      cout << '\n';
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