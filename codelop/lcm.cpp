#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
   if (b == 0)
   {
      return a;
   }
   return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
   return a / gcd(a, b) * b;
}

void solve()
{
   ll n;
   cin >> n;
   ll a[n + 1];
   for (ll i = 1; i <= n; i++)
   {
      cin >> a[i];
   }
   ll ans = a[1];
   for (long long i = 2; i <= n; i++)
   {
      ans = lcm(ans, a[i]);
   }
   cout << ans;
}

int main()
{
   solve();
   return 0;
}