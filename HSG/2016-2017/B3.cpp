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
struct edge
{
    double x, y;
};
void magicFunc()
{
    ll n;
    cin >> n;
    edge a[n + 1];
    FOR(i, 0, n - 1)
    {
        cin >> a[i].x >> a[i].y;
    }
    double res = 0.0;
    FOR(i, 0, n - 1)
    {
        ll j = (i + 1) % n;
        res += a[i].x * a[j].y;
        res -= a[i].y * a[j].x;
    }
    double ans = abs(res) / 2.0;
    cout << fixed << setprecision(1) << ans;
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