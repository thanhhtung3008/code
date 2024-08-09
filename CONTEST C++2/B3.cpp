/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e7 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
bool check(ll n)
{
   if (n < 2)
   {
      return false;
   }
   if (n == 2 || n == 3)
   {
      return true;
   }
   if (n % 2 == 0 || n % 3 == 0)
   {
      return false;
   }
   for (ll i = 5; i * i <= n; i += 6)
   {
      if (n % i == 0 || n % (i + 2) == 0)
      {
         return false;
      }
   }
   return true;
}
void magicFunc()
{
   ll n;
   cin >> n;
   while (!check(n))
   {
      n++;
   }
   cout << n;
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