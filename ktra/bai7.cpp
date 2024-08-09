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
ll n, m, a[101][101];
void nhap()
{
    cin >> n >> m;
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= m; j++)
            cin >> a[i][j];
    ll hang[n] = {0};
    ll cot[m] = {0};
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= m; j++)
            if (a[i][j] == 1)
            {
                hang[i] = 1;
                cot[j] = 1;
            }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= m; j++)
            if (hang[i] == 0 || cot[j] == 0)
                ans++;
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();
    return 0;
}