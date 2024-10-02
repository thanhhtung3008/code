#include <bits/stdc++.h>
#define ll long long
const ll maxn = 1e5 + 9;
using namespace std;

ll n;
ll a[maxn], f[maxn];

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
      f[i] = f[i - 1] + a[i];
   }
   ll ans, check = true;
   for (ll i = 1; i <= n; i++)
   {
      if (f[n] - a[i] == a[i])
      {
         ans = a[i];
         check = false;
         break;
      }
   }
   if (check == false)
   {
      cout << ans;
   }
   else
   {
      cout << "N";
   }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   solve();
   return 0;
}