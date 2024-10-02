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

#define TASK "chiaruong"

vll a(maxn);
vector<string> p;

void sinh(int n, string s, vector<char> &l)
{
   if (s.size() == n)
   {
      ll sA = 0, sB = 0, sC = 0;
      FOR(i, 0, n - 1)
      {
         if (s[i] == 'A')
         {
            sA += a[i];
         }
         else if (s[i] == 'B')
         {
            sB += a[i];
         }
         else
         {
            sC += a[i];
         }
      }
      if (sA == sB && sB == sC)
      {
         p.push_back(s);
      }
      return;
   }
   for (char c : l)
   {
      sinh(n, s + c, l);
   }
}

void solve()
{
   ll n;
   cin >> n;
   vector<char> l = {'A', 'B', 'C'};
   FOR(i, 0, n - 1)
   {
      cin >> a[i];
   }
   sinh(n, "", l);
   if (p.size() == 0)
   {
      cout << -1;
      return;
   }
   cout << p.size() << endl;
   for (string s : p)
   {
      cout << s << endl;
   }
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   solve();
   return 0;
}
