/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
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
void magicFunc()
{
    ll n;
    cin >> n;
    ll a[n + 1], dp[n + 1];
    FOR(i, 1, n)
    {
        cin >> a[i];
        dp[i] = 1;
    }
    FOR(i, 2, n)
    {
        ll lmax = 0;
        FOR(j, 1, i - 1)
        {
            if (a[i] > a[j])
            {
                if (dp[j] > lmax)
                {
                    lmax = dp[j];
                }
            }
        }
        dp[i] = lmax + 1;
    }
    cout << *max_element(dp + 1, dp + n + 1);
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
