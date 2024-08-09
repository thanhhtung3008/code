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
void magicFunc()
{
    ll m, n, s;
    cin >> m >> n >> s;
    ll a[m + 1][n + 1];
    FOR(i, 1, m)
    {
        FOR(j, 1, n)
        {
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    while (s--)
    {
        ll x;
        cin >> x;
        if (x > m)
        {
            x = x - m;
            FOR(i, 1, m)
            {
                if (a[i][x] == 2)
                    a[i][x] = 0;
                else
                    a[i][x]++;
            }
        }
        else
        {
            FOR(i, 1, n)
            {
                if (a[x][i] == 2)
                    a[x][i] = 0;
                else
                    a[x][i]++;
            }
        }
    }
    FOR(i, 1, m)
    {
        FOR(j, 1, n)
        {
            if (a[i][j] == 0)
                ans++;
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