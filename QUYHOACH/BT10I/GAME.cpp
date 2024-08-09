
/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)
#define endl "\n"
const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll m, n, b;
ll a[1001][1001];
ll f1[1001][1001];
ll f2[1001][1001];
void magicFunc()
{
    cin >> n >> m;
    cin >> b;
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            cin >> a[i][j];
        }
    }
    FOR(i, 0, n)
    {
        f2[i][0] = f2[i][m + 1] = INT_MAX;
    }
    FOR(i, 1, m)
    {
        f1[1][i] = a[1][i] + b;
        f2[1][i] = a[1][i] + b;
    }
    FOR(i, 2, n)
    {
        FOR(j, 1, m)
        {

            f2[i][j] = min({f2[i - 1][j - 1], f2[i - 1][j], f2[i - 1][j + 1]}) + a[i][j];
            f1[i][j] = max({f1[i - 1][j - 1], f1[i - 1][j], f1[i - 1][j + 1]}) + a[i][j];
            if (a[i][j] == 0)
            {
                f2[i][j] -= f2[i][j] / 2;
                f1[i][j] -= f1[i][j] / 2;
            }
        }
    }
    cout << *min_element(f2[n] + 1, f2[n] + m + 1) << endl;
    cout << *max_element(f1[n] + 1, f1[n] + m + 1);
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
