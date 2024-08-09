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

ll n, m;
ll a[1001][1001];
ll tinh()
{
    ll hang[n] = {0};
    ll cot[m] = {0};
    FOR(i, 0, n - 1)
    FOR(j, 0, m - 1)
    if (a[i][j] == 1)
    {
        hang[i] = 1;
        cot[j] = 1;
    }
    ll ans = 0;
    FOR(i, 0, n - 1)
    FOR(j, 0, m - 1)
    if (hang[i] == 0 || cot[j] == 0)
        ans++;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> n >> m;
    FOR(i, 0, n - 1)
    FOR(j, 0, m - 1)
    cin >> a[i][j];
    cout << tinh();
    return 0;
}