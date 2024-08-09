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
ll n, s[maxn], a[maxn], k;
bool check(ll m)
{
    ll h = 1, t = 0;
    FOR(i, 1, n)
    {
        if (t + a[i] > m)
        {
            h++;
            t = a[i];
        }
        else
            t += a[i];
    }
    return h <= k;
}
void magicFunc()
{
    cin >> n >> k;
    ll l = INT_MIN;
    ll r = 0;
    FOR(i, 1, n)
    {
        cin >> a[i];
        l = max(l, a[i]);
        r += a[i];
    }
    ll ans = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (check(m))
        {
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
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