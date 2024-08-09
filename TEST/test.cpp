/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

const long long maxn = 10000000;
bool check[maxn];
void snt()
{
   memset(check, true, sizeof(check));
   check[0] = check[1] = false;
   for (long long i = 2; i * i <= maxn; ++i)
   {
      if (check[i])
      {
         for (long long j = i * i; j <= maxn; j += i)
         {
            check[j] = false;
         }
      }
   }
}
long long dp[maxn];
void solve()
{
   dp[0] = 0;
   for (long long i = 1; i <= maxn; ++i)
   {
      dp[i] = dp[i - 1] + check[i];
   }
}
void magicFunc()
{
   long long n;
   while (cin >> n)
   {
      cout << dp[n * 2] - dp[n] << '\n';
   }
}
int main()
{
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
   snt();
   solve();
   magicFunc();
}