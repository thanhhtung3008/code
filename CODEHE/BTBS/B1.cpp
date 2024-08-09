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
void magicFunc()
{
    cin >> n >> k;
    FOR(i, 1, n)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    ll ans = INT_MAX;
    FOR(i, 1, n)
    {
        ll t = upper_bound(s + 1, s + n + 1, s[i] - k) - s - 1;
        if (t > 0)
        {
            cout << i << " " << t << endl;
            ans = min(ans, i - t);
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