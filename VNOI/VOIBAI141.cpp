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
long long n, a, b;
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
   return a.ft < b.ft;
}
void magicFunc()
{
   cin >> n >> a >> b;
   vector<pair<ll, ll>> tree(n);
   FOR(i, 0, n - 1)
   {
      cin >> tree[i].ft >> tree[i].sc;
   }
   sort(tree.begin(), tree.end(), cmp);
   ll ans = INT_MAX;
   ll l = 0, tung = 0, truc = 0;
   /*
 FOR(r, 0, a + b - 1)
 {
    if (tree[r].sc == 1)
    {
       ++tung;
    }
    else
    {
       ++truc;
    }
 }

 FOR(i, 0, n - 1)
 {
    cout << tree[i].ft << " " << tree[i].sc << endl;
 }
 cout << tung << " " << truc;

 if (truc == b && tung == a)
 {
    cout << tree[a + b - 1].ft - tree[0].ft;
    return;
 }   */
   FOR(r, 0, n - 1)
   {
      if (tree[r].sc == 1)
      {
         ++tung;
      }
      else
      {
         ++truc;
      }
      while (tung >= a && truc >= b)
      {
         ans = min(ans, tree[r].ft - tree[l].ft);
         if (tree[l].sc == 1)
         {
            --tung;
         }
         else
         {
            --truc;
         }
         l++;
      }
   }
   if (ans != INT_MAX)
   {
      cout << ans;
   }
   else
   {
      cout << -1;
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
   return 0;
}