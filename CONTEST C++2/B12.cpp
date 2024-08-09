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
ll u[maxn];
ll d[maxn];
void uoc()
{
   FOR(i, 1, sqrt(maxn))
   {
      u[i * i] += i;
      d[i * i]++;
      for (ll j = i + 1; j <= maxn / i; j++)
      {
         u[i * j] += (i + j);
         d[i * j] += 2;
      }
   }
   FOR(i, 1, maxn)
   {
      u[i] += u[i - 1];
      d[i] += d[i - 1];
   }
}
void magicFunc()
{
   uoc();
   ll t;
   cin >> t;
   while (t--)
   {
      ll a, b;
      cin >> a >> b;
      cout << d[b] - d[a - 1] << " " << u[b] - u[a - 1] << '\n';
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