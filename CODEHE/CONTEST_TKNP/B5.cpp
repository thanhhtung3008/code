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
ll n, s, a[100001];
void magicFunc()
{
    cin >> n >> s;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    ll ans = 0;
    sort(a + 1, a + n + 1);
    FOR(i, 1, n)
    {
        res += upper_bound(a + i + 1, a + n + 1, s - a[i]) - lower_bound(a + i + 1, a + n + 1, s - a[i]);
    }
    if (res != 0)
        cout << res;
    else
        cout << 0;
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