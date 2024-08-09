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
bool check(string n, ll k)
{
   ll dem = 0;
   for (auto c : n)
   {
      dem = (dem * 10 + (c - 48)) % k;
   }
   return dem == 0;
}
string find(ll k)
{
   queue<string> q;
   q.push("6");
   q.push("8");
   while (!q.empty())
   {
      string v = q.front();
      q.pop();
      if (check(v, k))
      {
         return v;
      }
      if (v.size() <= 200)
      {
         if (v.back() == '6')
         {
            q.push(v + "6");
         }
         else
         {
            q.push(v + "6");
            q.push(v + "8");
         }
      }
   }
   return "-1";
}
void magicFunc()
{
   ll k;
   cin >> k;
   cout << find(k);
}
int main()
{
#ifndef ONLINE_JUDGE
#endif
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   magicFunc();
   return 0;
}