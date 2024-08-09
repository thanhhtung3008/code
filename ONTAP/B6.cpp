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
bool check(ll n)
{
    ll k = sqrt(n);
    if (k * k == n)
        return true;
    return false;
}
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
    FOR(j, 1, m)
    {
        ll maxc = 0;
        FOR(i, 1, n)
        {
            if (check(a[i][j]) && a[i][j] > maxc)
                maxc = a[i][j];
        }
        cout << maxc << endl;
    }
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