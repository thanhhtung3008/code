/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

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
ll a[100] = {0, 1, 3, 5, 2, 4, 6, 8, 7}, n = 8, t[100];
void build(ll id, ll l, ll r)
{
   if (l == r)
   {
      t[id] = a[l];
      // cout << id << " " << l << " " << r << " " << t[id] << endl;
      return;
   }
   ll m = (l + r) / 2;
   build(id * 2, l, m);
   build(id * 2 + 1, m + 1, r);
   t[id] = t[id * 2] + t[id * 2 + 1];
   // cout << id << " " << l << " " << r << " " << t[id] << endl;
}
ll get(ll id, ll l, ll r, ll u, ll v)
{
   if (r < u || v < l)
   {
      return 0;
   }
   if (u <= l && v >= r)
   {
      cout << id << " " << l << " " << r << " " << t[id] << endl;
      return t[id];
   }
   ll m = (l + r) / 2;
   ll t1 = get(id * 2, l, m, u, v);
   ll t2 = get(id * 2 + 1, m + 1, r, u, v);
   cout << id << " " << l << " " << r << " " << t1 + t2 << endl;
   return t1 + t2;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
   build(1, 1, n);
   get(1, 1, n, 2, 5);
   return 0;
}