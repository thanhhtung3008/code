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

pll countA_B(const string &s, ll n)
{
   ll countAA = 0, countBB = 0;
   FOR(i, 0, n - 1)
   {
      if (s[i] == 'A' && s[i + 1] == 'A')
      {
         countAA++;
      }
      if (s[i] == 'B' && s[i + 1] == 'B')
      {
         countBB++;
      }
   }
   return {countAA, countBB};
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   freopen(TASK ".inp", "r", stdin);
   freopen(TASK ".out", "w", stdout);
   ll n;
   string s;
   cin >> n >> s;
   string rA = s, rB = s;
   FOR(i, 0, n - 1)
   {
      if (rA[i] == '*')
      {
         rA[i] = 'A';
      }
      if (rB[i] == '*')
      {
         rB[i] = 'B';
      }
   }
   pll kqA = countA_B(rA, n);
   pll kqB = countA_B(rB, n);
   ll maxAA = max(kqA.first, kqB.first);
   ll maxBB = max(kqA.second, kqB.second);
   cout << max(maxAA, maxBB);
   return 0;
}
/// Stay calm, read the question slowly and understand the question, it is often simpler than you imagine