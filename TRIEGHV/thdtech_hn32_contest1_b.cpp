#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
const ll maxn = 1e6 + 9;

using namespace std;

ll n, a[maxn], k, s;
ll ans = INT_MIN;

void solve()
{
   cin >> n >> k;
   for (ll i = 1; i <= n; i++)
   {
      cin >> a[i];
   }
   for (ll i = 1; i <= n; i++)
   {
      s += a[i];
      if (i >= k)
      {
         s -= a[i - k];
         ans = max(ans, s);
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