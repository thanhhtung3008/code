#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

ll n, a[5005];

ll tknp1(ll l, ll r, ll x)
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

ll tknp2(ll l, ll r, ll x)
{
   ll ans = -1;
   while (l <= r)
   {
      ll m = (l + r) / 2;
      if (a[m] > x)
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
   ll s = 0;
   cin >> n;
   for (ll i = 1; i <= n; i++)
   {
      cin >> a[i];
      s += a[i];
   }
   if (s % n != 0)
   {
      cout << 0 << endl;
      return;
   }
   ll ans = 0;
   ll k = (s / n) * 3;
   for (ll i = 1; i < n - 1; i++)
   {
      unordered_map<ll, ll> m;
      for (ll j = i + 1; j <= n; j++)
      {
         ll r = k - a[j] - a[i];
         if (m.find(r) != m.end())
         {
            ans += m[r];
         }
         m[a[j]]++;
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