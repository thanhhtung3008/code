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
ll n, k, a[maxn];
bool ok;
void ktao()
{
    FOR(i, 1, n)
    {
        a[i] = i;
    }
}
void sinh()
{
    ll i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        ok = false;
    }
    else
    {
        a[i]++;
        FOR(j, i + 1, k)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
void magicFunc()
{
    cin >> n >> k;
    ktao();
    ok = true;
    while (ok)
    {
        FOR(i, 1, k)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
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