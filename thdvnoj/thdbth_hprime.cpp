/* Author : Nguyen Thanh Tung - Tran Hung Dao High School for Gifted Student */

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

const long long maxn = 1e7 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "code"

ll tinh(ll n)
{
   ll s = 0;
   while (n)
   {
      s += (n % 10);
      n /= 10;
   }
   return s;
}

bool check[maxn];

void snt()
{
   memset(check, true, sizeof(check));
   check[0] = check[1] = false;
   FOR(i, 2, sqrt(maxn))
   {
      if (check[i])
      {
         for (ll j = i * i; j <= maxn; j += i)
         {
            check[j] = false;
         }
      }
   }
}

void solve()
{
   snt();
   ll n, h;
   cin >> n >> h;
   vll p;
   FOR(i, 2, n)
   {
      if (check[i] && tinh(i) == h)
      {
         p.push_back(i);
      }
   }
   cout << p.size() << endl;
   for (auto i : p)
   {
      cout << i << endl;
   }
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   // freopen(TASK ".inp", "r", stdin);
   // freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}