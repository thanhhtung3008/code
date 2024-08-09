#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
void magicFunc()
{
   ll n;
   while (cin >> n)
   {
      bool ok[10];
      ll l = n;
      while (true)
      {
         fill(begin(ok), end(ok), false);
         ll s = l;
         bool ktra = true;
         while (s > 0)
         {
            ll d = s % 10;
            if (d == 0 || ok[d])
            {
               ktra = false;
               break;
            }
            ok[d] = true;
            s /= 10;
         }
         if (ktra)
            break;
         ++l;
      }
      cout << l << '\n';
   }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   magicFunc();
   return 0;
}
