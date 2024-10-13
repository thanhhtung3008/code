#include <bits/stdc++.h>
#define ll long long
const ll maxn = 3e6 + 9;
using namespace std;
bool check[maxn];

void snt()
{
   memset(check, true, sizeof(check));
   check[0] = check[1] = false;
   for (ll i = 2; i * i <= maxn; i++)
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

void solve()
{
   snt();
   ll n;
   cin >> n;
   ll ans = 0;
   for (ll p = 2; p <= n * 3; p++)
   {
      if (check[p])
      {
         ll l = (p - n + 1) / 2;
         l = max(l, (ll)1);
         ll r = (p - 1) / 2;
         r = min(r, n);
         ans += (r - l + 1);
      }
   }
   cout << ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   solve();
   return 0;
}