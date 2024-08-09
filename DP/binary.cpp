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
string s;
ll n;
ll a[10001][10001];
string find(ll n)
{
    vector<vector<string>> d(n, vector<string>(n, ""));
    d[0][0] = to_string(a[0][0]);
    FOR(i, 1, n - 1)
    d[0][i] = d[0][i - 1] + to_string(a[0][i]);
    FOR(j, 1, n - 1)
    d[j][0] = d[j - 1][0] + to_string(a[j][0]);
    FOR(i, 1, n - 1)
    FOR(j, 1, n - 1)
    {
        d[i][j] += min(d[i][j - 1], d[i - 1][j]) + to_string(a[i][j]);
    }
    return d[n - 1][n - 1];
}
void magicFunc()
{
    cin >> n;
    FOR(i, 0, n - 1)
    FOR(j, 0, n - 1)
    cin >> a[i][j];
    string ans = find(n);
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    magicFunc();
    return 0;
}
