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
#define FOR(i, l, r) for (int i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const long long maxn = 1e6 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "zero"

int ltt(int a[], int n, int k)
{
   unordered_map<int, int> m;
   ll s = 0;
   int l = 0;
   FOR(i, 0, n - 1)
   {
      s += a[i];
      if (s == 0)
      {
         l = i + 1;
      }
      if (m.find(s) == m.end())
      {
         m[s] = i;
      }
      if (m.find(s - k) != m.end())
      {
         if (i - m[s - k] > l)
         {
            l = i - m[s - k];
         }
      }
   }
   return l;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   int n;
   cin >> n;
   int a[n];
   FOR(i, 0, n - 1)
   {
      cin >> a[i];
   }
   int k = 0;
   cout << ltt(a, n, k);
   return 0;
}
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine