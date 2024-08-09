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
void magicFunc()
{
    cin >> n;
    ll a[n + 1];
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    ll ans = 0;
    sort(a + 1, a + n + 1);
    FOR(i, 1, n)
    {
        ll start = lower_bound(a + i + 1, a + n + 1, -a[i]) - a;
        ll end = upper_bound(a + 1 + i, a + n + 1, -a[i]) - a - 1;
        if (end >= start)
        {
            ans += (end - start + 1);
        }
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