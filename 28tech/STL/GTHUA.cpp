#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const ll maxn = 1e5 + 5;
using namespace std;
long double dp[maxn];
void magicFunc(ll n)
{
    dp[0] = dp[1] = 1;
    for (long long i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] * i;
    }
    cout << dp[n] << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        magicFunc(n);
    }
}