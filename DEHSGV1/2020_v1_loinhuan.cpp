/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 50001;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll n, q, a[maxn], f[maxn];
bool check[maxn];
void snt()
{
   memset(check, true, sizeof check);
   check[0] = check[1] = false;
   FOR(i, 2, sqrt(maxn))
   {
      if (check[i])
      {
         for (ll j = i * i; j <= maxn; j += i)
         {
            check[j] = false;
         }
      }
   }
}
void magicFunc()
{
   snt();
   cin >> n;
   FOR(i, 1, n)
   {
      cin >> a[i];
      if (a[i] > 0 && check[i])
      {
         a[i] = 0;
      }
      f[i] = f[i - 1] + a[i];
   }
   cin >> q;
   while (q--)
   {
      ll x, y;
      cin >> x >> y;
      cout << f[y] - f[x - 1] << '\n';
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