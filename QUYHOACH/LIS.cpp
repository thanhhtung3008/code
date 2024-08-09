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
ll n, a[maxn], f[maxn], b[maxn];
void magicFunc()
{
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
        f[i] = 1;
    }
    FOR(i, 2, n)
    {
        ll jmax = 0;
        FOR(j, 1, i - 1)
        {
            if (a[j] < a[i])
            {
                f[i] = max(f[i], f[j] + 1);
            }
        }
        b[i] = f[i] - 1;
    }
    ll k = 0;
    FOR(i, 1, n)
    {
        if (f[i] > f[k])
            k = i;
    }
    while (true)
    {
        ll i = k;
        cout << a[i] << " ";
        k = b[i];
        if (b[k] == 0)
        {
            cout << a[k];
            break;
        }
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