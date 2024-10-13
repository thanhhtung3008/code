#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
const ll maxn = 1e6 + 9;

using namespace std;

ll q, d[maxn], u[maxn];

void ktao()
{
   for (ll i = 1; i <= sqrt(maxn); i++)
   {
      d[i * i]++;
      u[i * i] += i;
      for (ll j = i + 1; j <= maxn / i; j++)
      {
         d[i * j] += 2;
         u[i * j] += (i + j);
      }
   }
}

void solve()
{
   ktao();
   cin >> q;
   while (q--)
   {
      ll x;
      cin >> x;
      cout << d[x] << " " << u[x] << endl;
   }
}

int main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   solve();
   return 0;
}