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

bool check(char c)
{
   return c != 'A' && c != 'W' && c != 'R';
}

void solve()
{
   ll n;
   cin >> n;
   vector<string> s;
   FOR(i, 1, n)
   {
      string k;
      cin >> k;
      s.push_back(k);
   }
   ll ml = 0, dem = 0, lef = 0;
   for (auto stringS : s)
   {
      unordered_set<char> ck;
      for (char c : stringS)
      {
         if (!check(c) || ck.find(c) != ck.end())
         {
         }
         else
         {
            lef++;
            ck.insert(c);
            if (l > ml)
            {
               ml = l;
               dem = 1;
            }
            else if (l == ml)
            {
               dem++;
            }
         }
      }
      ck.clear();
   }
   if (dem == 0)
   {
      cout << "NO";
   }
   else
   {
      cout << ml << " " << dem;
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
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine