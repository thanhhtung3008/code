/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e7 + 9;
const ll N = 1e7 + 9;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
bool check[N];
ll n, k, q;
void sang()
{
   FOR(i, 0, N)
   {
      check[i] = true;
   }
   check[1] = check[0] = false;
   FOR(i, 2, sqrt(N))
   {
      for (ll j = i * i; j <= N; j += i)
      {
         check[j] = false;
      }
   }
}
void magicFunc()
{
   cin >> q;
   sang();
   while (q--)
   {
      cin >> n >> k;
      ll res = 0;
      string t;
      vector<ll> prime;
      FOR(i, 1, N)
      {
         if (check[i])
         {
            t += to_string(i);
            res++;
            if (res == n)
               break;
         }
      }
      FOR(i, 0, t.size() - 1)
      {
         while (!prime.empty() && k > 0 && prime.back() < t[i] - 48)
         {
            prime.pop_back();
            k--;
         }
         prime.push_back(t[i] - 48);
      }
      while (k > 0)
      {
         prime.pop_back();
         k--;
      }
      for (auto i : prime)
         cout << i;
      cout << endl;
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