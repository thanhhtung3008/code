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
ll n;
ll f[100001];
ll a[100001];
void magicFunc()
{
    FOR(i, 1, 100001)
    {
        f[i] = 1;
    }
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    ll b[100001];
    FOR(i, 1, n)
    {
        ll jmax = 0;
        for (long long j = 1; j < i; j++)
        {
            // f[i] = f[i - 1];
            if (a[i] > a[j])
            {
                f[i] = max(f[i], f[j] + 1);
                jmax = j;
            }
        }
        cout << jmax << endl;
        b[i] = jmax;
    }
    ll k = 0;
    FOR(i, 1, n)
    if (f[i] > f[k])
        k = i;
    // cout << endl;
    while (true)
    {
        ll i = k;
        cout << a[i] << " ";
        k = b[i];
        if (b[k] == 0)
        {
            cout << a[k] << " ";
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