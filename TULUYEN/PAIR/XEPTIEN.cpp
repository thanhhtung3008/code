#include <bits/stdc++.h>
#define ll long long
#define ft first
#define sc second
#define endl '\n'
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
using namespace std;
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
   if (a.sc == b.sc)
   {
      return a.ft > b.ft;
   }
   return a.sc < b.sc;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
   ll n;
   cin >> n;
   vector<pair<ll, ll>> p;
   FOR(i, 1, n)
   {
      ll x, y;
      cin >> x >> y;
      p.push_back({x, y});
   }
   sort(p.begin(), p.end(), cmp);
   for (auto x : p)
   {
      cout << x.ft << " " << x.sc << '\n';
   }
}