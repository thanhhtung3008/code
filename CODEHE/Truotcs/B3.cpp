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
ll n, k, b, a[maxn];
void magicFunc()
{
    cin >> n >> k >> b;
    ll x;
    FOR(i, 1, b)
    {
        cin >> x;
        a[x] = 1;
    }
    ll cnt = 0;
    FOR(i, 1, k)
    {
        if (a[i] == 1)
            cnt++;
    }
    ll ans = cnt;
    FOR(i, k + 1, n)
    {
        cnt = cnt - a[i - k] + a[i];
        ans = min(ans, cnt);
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