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

void solve()
{
   string s;
   cin >> s;
   deque<char> d;
   ll i = 0;
   while (i <= s.size() - 1)
   {
      if (s.size() % 2 != 0)
      {
         if (i % 2 != 0)
         {
            d.push_back(s[i]);
         }
         else
         {
            d.push_front(s[i]);
         }
      }
      else
      {
         if (i % 2 == 0)
         {
            d.push_back(s[i]);
         }
         else
         {
            d.push_front(s[i]);
         }
      }
      i++;
   }
   for (auto i : d)
   {
      cout << i;
   }
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen("BAI3.inp", "r", stdin);
   freopen("BAI3.out", "w", stdout);
   solve();
   return 0;
}