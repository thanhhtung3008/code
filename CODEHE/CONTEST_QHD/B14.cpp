/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6+7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll n,r[1001],h[1001],dp[1001];
void magicFunc()
{
   ll n;
   cin >> n;
   FOR(i,1,n)
   {
      cin >> r[i] >> h[i];
      dp[i]=h[i];
   }
   FOR(i,2,n)
   {
      FOR(j,1,i-1)
      {
         if(r[i]<=r[j])
         {
            dp[i]=max(dp[i],dp[j]+h[i]);
         }
      }
   }
   cout << *max_element(dp+1,dp+n+1);
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
