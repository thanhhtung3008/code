#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
ll a[100003], pre[100003];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   ll n, q;
   cin >> n >> q;
   for (ll i = 1; i <= n; i++)
   {
      pre[i] = pre[i - 1] + a[i];
   }
   while (q--)
   {
      ll x;
      cin >> x;
      if (x == 1)
      {
         ll y, z;
         cin >> y >> z;
         // pre[y] -= a[y];
         if (a[y] == z)
         {
            continue;
         }
         a[y] = z;
         for (ll j = y; j <= n; j++)
            pre[j] += z;
      }
      if (x == 2)
      {
         ll y, z;
         cin >> y >> z;
         cout << pre[z] - pre[y - 1] << endl;
      }
   }
}