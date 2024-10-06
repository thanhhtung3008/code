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

const long long maxn = 1e6 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "code"

vector<ll> a(maxn);
ll n, k;
ll mina[maxn];
unordered_map<ll, ll> idx;
unordered_map<ll, ll> dem;
void ktao()
{
   FOR(i, 2, maxn)
   {
      if (mina[i] == 0)
      {
         for (ll j = i; j <= maxn; j += i)
         {
            if (mina[j] == 0)
            {
               mina[j] = i;
            }
         }
      }
   }
}

void solve()
{
   ktao();
   cin >> n >> k;
   FOR(i, 1, n)
   {
      cin >> a[i];
      idx[a[i]] = i;
   }
   FOR(i, 2, k)
   {
      ll s = mina[i];
      if (idx.count(s))
      {
         dem[s]++;
      }
   }
   FOR(i, 1, n)
   {
      cout << dem[a[i]] << endl;
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