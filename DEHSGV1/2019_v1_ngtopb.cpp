/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 5000001;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll tinh(ll n)
{
   ll ans = 0;
   FOR(i, 2, sqrt(n))
   {
      if (n % i == 0)
      {
         ++ans;
         while (n % i == 0)
         {
            n /= i;
         }
      }
   }
   if (n != 1)
   {
      ++ans;
   }
   return ans;
}
ll n, k, x;
void magicFunc()
{
   cin >> n >> k;
   FOR(i, 1, n)
   {
      cin >> x;
      if (tinh(x) == k)
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