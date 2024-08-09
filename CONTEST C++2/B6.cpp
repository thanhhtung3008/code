/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 2e7 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
bool nt[maxn];
void snt()
{
   FOR(i, 2, maxn)
   {
      nt[i] = true;
   }
   nt[0] = nt[1] = false;
   for (ll i = 2; i * i <= maxn; ++i)
   {
      if (nt[i])
      {
         for (ll j = i * i; j <= maxn; j += i)
         {
            nt[j] = false;
         }
      }
   }
}
bool check(ll n)
{
   ll dem = 0;
   ll k = 0;
   while (n)
   {
      if (nt[n])
      {
         ++dem;
      }
      n /= 10;
      k++;
   }
   return dem == k;
}
void magicFunc()
{
   snt();
   ll n;
   cin >> n;
   FOR(i, 2, n)
   {
      if (check(i))
      {
         cout << i << " ";
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