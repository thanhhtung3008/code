#include <bits/stdc++.h>
#define ll long long
#define ft first
#define sc second
#define endl '\n'
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
using namespace std;
ll n;
vector<pair<string, ll>> p;
vector<pair<ll, ll>> xh;
ll pos[1001];
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
   return a.sc > b.sc;
}
void magicFunc()
{
   cin >> n;
   FOR(i, 1, n)
   {
      string c;
      ll x, y;
      cin >> c >> x >> y;
      p.push_back({c, i});
      xh.push_back({i, x + y});
   }
   sort(xh.begin(), xh.end(), cmp);
   pos[xh[0].ft] = 1;
   ll id = 1;
   FOR(i, 2, n)
   {
      if (xh[i - 1].sc != xh[i - 2].sc)
      {
         id = i;
      }
      pos[xh[i - 1].ft] = id;
   }
   FOR(i, 1, n)
   {
      cout << p[i - 1].ft << " " << pos[p[i - 1].sc] << endl;
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