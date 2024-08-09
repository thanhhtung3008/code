/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (int i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll a[1001][1001], f[1001][1001];
int n, m;
void magicFunc()
{
    cin >> n >> m;
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            cin >> a[i][j];
        }
    }
    if (m == 1)
    {
        ll ans = 0;
        FOR(i, 1, n)
        {
            ans += a[i][1];
        }
        cout << ans;
        return;
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            f[i][j] = -oo;
        }
    }

    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            f[i][j] = a[i][j] + max(f[i - 1][j - 1], max(f[i - 1][j], f[i - 1][j + 1]));
        }
    }
    cout << *max_element(f[n] + 1, f[n] + 1 + m);
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