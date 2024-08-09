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
ll m, n, k, x;
unordered_map<ll, ll> mp;
void magicFunc()
{
   cin >> m >> n >> k;
   FOR(i, 1, m)
   {
      FOR(j, 1, n)
      {
         cin >> x;
         mp[x]++;
      }
   }
   vector<ll> p;
   for (auto i : mp)
   {
      p.push_back(i.sc);
   }
   sort(p.begin(), p.end(), greater<ll>());
   ll s = 0;
   while (k--)
   {
      s += p[k];
   }
   cout << s;
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