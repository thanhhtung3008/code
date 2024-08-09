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
ll n, m, a[maxn], b[maxn];
void magicFunc()
{
    cin >> n >> m;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    FOR(j, 1, m)
    {
        cin >> b[j];
    }

    ll kq = 0;
    ll i = 1, j = 1;
    while (i <= n && j <= m)
    {
        if (a[i] < b[j])
        {
            ++i;
            continue;
        }
        else if (a[i] > b[j])
        {
            ++j;
            continue;
        }
        ll ans = 0, ans2 = 0;
        while (a[i] == b[j])
        {
            ans++;
            ++i;
        }
        ll tmp = a[i - 1];
        while (tmp == b[j])
        {
            ans2++;
            j++;
        }
        kq += ans * ans2;
    }
    cout << kq;
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