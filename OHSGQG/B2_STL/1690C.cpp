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
ll q, n;

void magicFunc()
{
   cin >> q;
   while (q--)
   {
      cin >> n;
      vector<pair<ll, ll>> p(n);
      FOR(i, 0, n - 1)
      {
         cin >> p[i].ft;
      }
      FOR(i, 0, n - 1)
      {
         cin >> p[i].sc;
      }
      cout << p[0].sc - p[0].ft << " ";
      FOR(i, 1, n - 1)
      {
         if (p[i].ft < p[i - 1].sc)
         {
            cout << p[i].sc - p[i - 1].sc << " ";
         }
         else
         {
            cout << p[i].sc - p[i].ft << " ";
         }
      }
      cout << '\n';
      // p.clear();
   }
}
int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
#endif
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   magicFunc();
   return 0;
}