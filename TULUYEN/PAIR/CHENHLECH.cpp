#include <bits/stdc++.h>
#define ll long long
#define ft first
#define sc second
#define endl '\n'
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
using namespace std;
ll n;
vector<pair<ll, ll>> p;
map<ll, ll> m;
void magicFunc()
{
   cin >> n;
   FOR(i, 1, n)
   {
      ll x, y;
      cin >> x >> y;
      p.push_back({x, y});
      m[abs(x - y)]++;
   }
   ll ans = 0, kq = 0;
   for (auto i : m)
   {
      if (i.sc > ans)
      {
         ans = i.sc;
         kq = i.ft;
      }
   }
   cout << kq << endl;
   for (auto i : p)
   {
      if (abs(i.ft - i.sc) == kq)
      {
         cout << i.ft << " " << i.sc << endl;
      }
   }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
   magicFunc();
}