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
ll n, k, a[maxn], cnt;
bool ok;
void ktao()
{
    cnt = 1;
    a[1] = n;
}
void sinh()
{
    ll i = cnt;
    while (i >= 1 && a[i] == 1)
    {
        i--;
    }
    if (i == 0)
    {
        ok = false;
    }
    else
    {
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if (q)
        {
            FOR(j, 1, q)
            {
                ++cnt;
                a[cnt] = a[i];
            }
        }
        if (r)
        {
            ++cnt;
            a[cnt] = r;
        }
    }
}
void magicFunc()
{
    cin >> n;
    ktao();
    ok = true;
    while (ok)
    {
        FOR(i, 1, cnt)
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