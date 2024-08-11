/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define vll vector<ll>
#define vp vector<pll>
#define pll pair<ll, ll>
#define ull unsigned long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

void wfile()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
}

void OJ()
{
#ifndef ONLINE_JUDGE
#endif
}

ll n;
unordered_map<ll, ll> m;
void magicFunc()
{
   cin >> n;
   ll x;
   FOR(i, 1, n * n)
   {
      cin >> x;
      m[x]++;
   }
   vector<ll> p;
   for (auto i : m)
   {
      p.push_back(i.sc * i.ft);
   }
   sort(p.begin(), p.end());
   ll s = 0;
   FOR(i, 1, m.size() - 1)
   {
      s += p[i];
   }
   cout << s;
}

int main()
{
   /// written by ThanhTung
   OJ();
   // wfile();
   magicFunc();
   return 0;
}
/// loveyousomuchhh <3