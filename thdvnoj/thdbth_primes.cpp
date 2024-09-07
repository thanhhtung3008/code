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

const long long maxn = 1e7 + 9;
const long long N = 3e4 + 9;
const long long oo = 1e18 + 9;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

#define TASK "code"

bool check[maxn];

void snt()
{
   FOR(i, 0, maxn)
   {
      check[i] = true;
   }
   check[0] = check[1] = false;
   FOR(i, 2, sqrt(maxn))
   {
      if (check[i])
      {
         for (ll j = i * i; j <= maxn; j += i)
         {
            check[j] = false;
         }
      }
   }
}

void solve()
{
   snt();
   ll t;
   cin >> t;
   while (t--)
   {
      ll n, k;
      cin >> n >> k;
      string nto;
      ll dem = 0;
      FOR(i, 2, maxn)
      {
         if (check[i])
         {
            nto += to_string(i);
            dem++;
            if (dem == n)
            {
               break;
            }
         }
      }
      string kq;
      FOR(i, 0, nto.size() - 1)
      {
         while (!kq.empty() && k > 0 && kq.back() < nto[i])
         {
            kq.pop_back();
            k--;
         }
         kq.push_back(nto[i]);
      }
      while (k > 0)
      {
         kq.pop_back();
         k--;
      }
      cout << kq;
      cout << endl;
      // cout << nto;
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