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
ll a[10001], b[10001], f[10001][10001];
void magicFunc()
{
    memset(f, 0, sizeof(f));
    cin >> n;
    FOR(i, 1, n)
    cin >> a[i];
    cin >> m;
    FOR(i, 1, m)
    cin >> b[i];
    FOR(i, 1, n)
    FOR(j, 1, m)
    {
        if (a[i] == b[j])
            f[i][j] = f[i - 1][j - 1] + 1;
        else
            f[i][j] = max(f[i - 1][j], f[i][j - 1]);
    }
    ll maxe = 0;
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            if (f[i][j] > maxe)
                maxe = f[i][j];
        }
    }
    cout << maxe;
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