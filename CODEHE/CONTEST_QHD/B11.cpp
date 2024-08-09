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
ll dp1[maxn], dp2[maxn];
ll n, a[maxn];
void traiphai()
{
    FOR(i, 2, n)
    {
        FOR(j, 1, i - 1)
        {
            if (a[i] < a[j])
            {
                dp1[i] = max(dp1[i], dp1[j] + 1);
            }
        }
    }
}
void phaitrai()
{
    FORD(i, n - 1, 1)
    {
        FORD(j, n, i + 1)
        {
            if (a[i] < a[j])
            {
                dp2[i] = max(dp2[i], dp2[j] + 1);
            }
        }
    }
}
void magicFunc()
{
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
        dp1[i] = 1;
        dp2[i] = 1;
    }
    traiphai();
    phaitrai();
    ll ans = 0;
    FOR(i, 1, n)
    {
        ans = max(ans, dp1[i] + dp2[i] - 1);
    }
    cout << ans;
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
