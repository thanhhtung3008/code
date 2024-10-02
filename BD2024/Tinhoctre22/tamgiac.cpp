#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ft first
#define sc second
#define ll long long
#define vll vector<ll>
#define vp vector<pll>
#define pll pair<ll, ll>
#define ull unsigned long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const long long maxn = 1e6 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "tamgiac"

void solve()
{
   ll n;
   cin >> n;
   ll a[n + 1];
   FOR(i, 1, n)
   {
      cin >> a[i];
   }
   sort(a + 1, a + n + 1);
   ll ans = 0;
   FORD(i, n, 1)
   {
      ll l = 1, r = i - 1;
      while (l < r)
      {
         // ll m = (l + r) / 2;
         if (a[r] + a[l] > a[i])
         {
            ans += (r - l);
            r--;
         }
         else
         {
            l++;
         }
      }
   }
   /*
    FOR(i, 1, n - 2)
    {
       FOR(j, i + 1, n - 1)
       {
          FOR(k, j + 1, n)
          {
             if (a[i] + a[j] > a[k] && a[i] + a[k] > a[j] && a[j] + a[k] > a[i])
             {
                cout << a[i] << " " << a[j] << " " << a[k] << endl;
                ans++;
             }
          }
       }
    }*/
   cout << ans;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}
