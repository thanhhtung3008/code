#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
const ll MAXN = 1e6 + 9;
const int inf = 1e18 + 7;
const int mod = 1e9 + 7;
ll f[MAXN];
ll n, m;
bool pr[MAXN];
void ktao2()
{
   memset(pr, true, sizeof(pr));
   pr[1] = 0;
   pr[0] = 0;
   for (int i = 2; i <= sqrt(MAXN); i++)
   {
      if (pr[i] == 1)
      {
         for (int j = i * i; j <= MAXN; j += i)
         {
            pr[j] = 0;
         }
      }
   }
}
void ktao()
{
   for (int i = 1; i <= sqrt(MAXN); i++)
   {
      f[i * i] += 1;
      for (int j = i + 1; j <= MAXN / i; j++)
      {
         f[i * j] += 2;
      }
   }
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   cin >> n >> m;
   ll ans = 0;
   ktao();
   ktao2();
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= m; j++)
      {
         ll x;
         cin >> x;
         if (pr[f[x]])
         {
            ans++;
         }
      }
   }
   cout << ans;
}