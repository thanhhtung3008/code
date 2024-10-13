#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

ll n;

void solve()
{
   cin >> n;
   ll s = 0, ans = 0;
   for (ll i = 1; i <= sqrt(n); i++)
   {
      if (n % i == 0)
      {
         ans++;
         if (i % 2 != 0)
         {
            s++;
         }
         if (i != n / i)
         {
            ans++;
            if ((n / i) % 2 != 0)
            {
               s++;
            }
         }
      }
   }
   ll g = ans - s;
   if (g > s)
   {
      cout << "Gorst";
   }
   else if (g < s)
   {
      cout << "Shane";
   }
   else
   {
      cout << "Tie";
   }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   solve();
   return 0;
}