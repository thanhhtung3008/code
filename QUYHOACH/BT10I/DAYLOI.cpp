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
ll n;
const ll maxx = 1e4 + 4;
ll a[maxx];
ll f1[maxx];
ll f2[maxx];
void dp1()
{
    FOR(i, 1, n)
    {
        f1[i] = 1;
    }
    FOR(i, 2, n)
    {
        FOR(j, 1, i - 1)
        {
            if (a[j] > a[i])
            {
                f1[i] = max(f1[i], f1[j] + 1);
            }
        }
    }
    // cout << *max_element(f1 + 1, f1 + n + 1);
}
void dp2()
{
    FOR(i, 1, n)
    {
        f2[i] = 1;
    }
    FORD(i, n - 1, 1)
    {
        FORD(j, n, i + 1)
        {
            if (a[i] < a[j])
            {
                f2[i] = max(f2[i], f2[j] + 1);
            }
        }
    }
    // cout << *max_element(f2 + 1, f2 + n + 1);
}
void magicFunc()
{
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    ll ans = 0;
    dp1();
    dp2();
    FOR(i, 1, n)
    {
        ans = max(ans, f1[i] + f2[i] - 1);
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