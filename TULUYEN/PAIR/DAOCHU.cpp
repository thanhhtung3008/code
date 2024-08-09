#include <bits/stdc++.h>
#define ll long long
#define ft first
#define sc second
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
   ll n;
   cin >> n;
   vector<pair<string, string>> p;
   FOR(i, 1, n)
   {
      string x, y;
      cin >> x >> y;
      p.push_back({x, y});
   }
   for (auto x : p)
   {
      cout << x.sc << " " << x.ft << '\n';
   }
}