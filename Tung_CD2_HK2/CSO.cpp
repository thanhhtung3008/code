#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check4(ll i)
{
    while (i > 0)
    {
        if (i % 10 == 4)
            return true;
        else
            i /= 10;
    }
    return false;
}
void magicFunc()
{
    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> dp(n + 1);
    for (long long i = 1; i <= n; i++)
    {
        if (check4(i) == true)
        {
            dp[i] = 1;
        }
        if (dp[i] == 1)
        {
            ans++;
        }
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CSO.inp", "r", stdin);
    freopen("CSO.out", "w", stdout);
    magicFunc();
}