#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
const ll maxn = 1e6 + 9;

using namespace std;

ll n, a[maxn];
ll ans = INT_MIN;

ll pos(ll l, ll r, ll x)
{
   ll ans = -1;
   while (l <= r)
   {
      ll m = (l + r) / 2;
      if (a[m] >= x)
      {
         r = m - 1;
         ans = m;
      }
      else
      {
         l = m + 1;
      }
   }
   return ans;
}

void solve()
{
   cin >> n;
   for (ll i = 1; i <= n; i++)
   {
      cin >> a[i];
   }
   sort(a + 1, a + n + 1);
   for (ll i = 1; i <= n; i++)
   {
      ll x = a[i] * 2;
      ll post = pos(i + 1, n, x);
      // cout << x << " " << post << endl;
      if (post != -1)
      {
         cout << n - post + 1 << endl;
      }
      else
      {
         cout << 0 << endl;
      }
   }
}
int main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   solve();
   return 0;
}