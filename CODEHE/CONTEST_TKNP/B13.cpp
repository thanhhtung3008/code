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
void magicFunc()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    ll res = 0;
    FOR(i, 1, n)
    {
        ll x = 2 * a[i];
        while (x <= 2 * a[n])
        {
            ll k = lower_bound(a + 1, a + n + 1, x) - a - 1;
            res = max(a[k] % a[i], res);
            // cout << x << " " << res << endl;
            x += (a[i] * 2);
        }
    }
    cout << res;
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