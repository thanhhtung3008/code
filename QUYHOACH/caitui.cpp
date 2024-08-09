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
ll n, s;
ll f[1001][1001];
ll v[100001];
ll w[100001];
void magicFunc()
{
    cin >> n >> s;
    FOR(i, 1, n)
    {
        cin >> v[i] >> w[i];
    }
    memset(f, 0, sizeof(f));
    FOR(i, 1, n)
    {
        FOR(j, 1, s)
        {
            f[i][j] = f[i - 1][j];
            if (w[i] <= j)
                f[i][j] = max(f[i][j], f[i - 1][j - w[i]] + v[i]);
        }
    }
    cout << f[n][s];
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