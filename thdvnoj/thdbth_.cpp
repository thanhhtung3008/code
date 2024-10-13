#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
const ll maxn = 5e6 + 9;

using namespace std;

ll n, d, u[maxn];

void ktao()
{
   for (ll i = 1; i <= sqrt(maxn); i++)
   {
      u[i * i] += i;
      for (ll j = i + 1; j <= maxn / i; j++)
      {
         u[i * j] += (i + j);
      }
   }
   for (ll i = 1; i <= maxn; i++)
   {
      u[i] -= i;
   }
}

void solve()
{
   ll ans = 0;
   ktao();
   cin >> n >> d;
   for (ll i = 1; i <= n; i++)
   {
      if (abs(i - u[i]) <= d)
      {
         ans++;
         // cout << i << " " << u[i] << " " << ans << endl;
      }
   }
   cout << ans;
}

int main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   solve();
   return 0;
}