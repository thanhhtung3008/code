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
ll n;
vector<ll> p;
void inp()
{
   cin >> n;
   ll x;
   FOR(i, 1, n)
   {
      cin >> x;
      p.push_back(x);
   }
}
ll u[maxn];
void snt()
{
   // memset(check, true, sizeof(check));
   // check[0] = check[1] = false;
   FOR(i, 2, maxn)
   {
      if (u[i] == 0)
      {
         for (ll j = i; j <= maxn; j += i)
         {
            u[j]++;
         }
      }
   }
}
void magicFunc()
{
   snt();
   ll ans = -1;
   // ll kq = 0;
   for (auto i : p)
   {
      if (u[i] > u[ans])
      {
         ans = i;
      }
   }
   cout << ans;
}
int main()
{
   freopen("prime.inp", "r", stdin);
   freopen("prime.out", "w", stdout);
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   inp();
   magicFunc();
   return 0;
}