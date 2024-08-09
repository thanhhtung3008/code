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
   ll t;
   cin >> t;
   while (t--)
   {
      ll n, k;
      cin >> n >> k;
      map<ll, ll> m, ma;
      FOR(i, 1, n)
      {
         ll x;
         cin >> x;
         if (m.find(x) == m.end())
         {
            m[x] = i;
         }
         ma[x] = i;
      }
      while (k--)
      {
         ll a, b;
         cin >> a >> b;
         if (m[a] && m[a] <= ma[b])
         {
            cout << "YES";
         }
         else
         {
            cout << "NO";
         }
         cout << '\n';
      }
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