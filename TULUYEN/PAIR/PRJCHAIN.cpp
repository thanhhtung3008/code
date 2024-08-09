#include <bits/stdc++.h>
#define ll long long
#define ft first
#define sc second
#define endl '\n'
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
using namespace std;
ll n;
pair<ll, ll> p[10001];
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
   if (a.ft < a.sc && b.ft < b.sc)
   {
      if (a.ft == b.ft)
      {
         return a.sc > b.sc;
      }
      return a.ft < b.ft;
   }
   if (a.ft > a.sc && b.ft > b.sc)
   {
      if (a.sc == b.sc)
      {
         return a.ft < b.ft;
      }
      return a.sc > b.sc;
   }
   return a.sc - a.ft > b.sc - b.ft;
}
void magicFunc()
{
   cin >> n;
   FOR(i, 0, n - 1)
   {
      cin >> p[i].ft;
   }
   FOR(i, 0, n - 1)
   {
      cin >> p[i].sc;
   }
   sort(p + 1, p + n, cmp);
   ll cur = 0, ans = 0;
   FOR(i, 0, n - 1)
   {
      cur = cur - p[i].ft;
      ans = min(ans, cur);
      cur = cur + p[i].sc;
   }
   cout << -ans;
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