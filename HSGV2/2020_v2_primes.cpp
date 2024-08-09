/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 400000;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
bool check(ll n)
{
   if (n < 2)
   {
      return false;
   }
   if (n == 2 || n == 3)
   {
      return true;
   }
   if (n % 2 == 0 || n % 3 == 0)
   {
      return false;
   }
   for (ll i = 5; i * i <= n; i += 6)
   {
      if (n % i == 0 || n % (i + 2) == 0)
      {
         return false;
      }
   }
   return true;
}
string tao(ll n)
{
   ll dem = 0, num = 2;
   string s;
   while (dem < n)
   {
      if (check(num))
      {
         dem++;
         s = s + to_string(num);
      }
      num++;
   }
   return s;
}
string maxso(string num, ll k)
{
   ll n = num.size();
   ll h = n - k;
   stack<char> st;
   for (auto c : num)
   {
      while (!st.empty() && st.top() < c && k > 0)
      {
         st.pop();
         k--;
      }
      st.push(c);
   }
   while (k > 0)
   {
      st.pop();
      k--;
   }
   string result;
   while (!st.empty())
   {
      result = st.top() + result;
      st.pop();
   }
   return result.substr(0, h);
}
void magicFunc()
{
   ll t;
   cin >> t;
   vector<pair<ll, ll>> test(t);
   FOR(i, 0, t - 1)
   {
      cin >> test[i].ft >> test[i].sc;
   }
   ll max_n = 0;
   for (const auto &i : test)
   {
      if (i.ft > max_n)
      {
         max_n = i.ft;
      }
   }
   vector<string> snt(maxn + 1);
   FOR(i, 1, max_n)
   {
      snt[i] = tao(i);
   }
   for (ll i = 0; i < t; ++i)
   {
      ll n = test[i].ft;
      ll k = test[i].sc;
      string ans = maxso(snt[n], k);
      cout << ans << '\n';
   }
}
int main()
{
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   magicFunc();
   return 0;
}