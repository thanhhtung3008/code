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
ll k, n;
ll a[maxn];
bool check(ll mid)
{
    ll dem = 0;
    FOR(i, 1, mid)
    {
        dem += a[i] / mid;
    }
    return dem >= k;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> n >> k;
    // ll a[n + 1];
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    ll r = *max_element(a + 1, a + n + 1);
    ll l = 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid))
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << l - 1;
    return 0;
}