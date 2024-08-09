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
ll n, m, x;
void magicFunc()
{
    cin >> m >> n >> x;
    ll a[m + 1], b[n + 1];
    FOR(i, 1, m)
    {
        cin >> a[i];
    }
    FOR(j, 1, n)
    {
        cin >> b[j];
    }
    sort(a + 1, a + m + 1);
    sort(b + 1, b + n + 1);
    ll ans = 0;
    FOR(i, 1, m)
    {

        ll k = x - a[i];
        ll start = lower_bound(b + 1, b + n + 1, k) - b;
        ll end = upper_bound(b + 1, b + n + 1, k) - b - 1;
        ans += (end - start + 1);
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