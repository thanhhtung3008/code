/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (int i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
string a, b;
ll f[1003][1003];
void magicFunc()
{
    memset(f, 0, sizeof(f));
    cin >> a;
    cin >> b;
    ll n = a.size();
    ll m = b.size();
    FOR(i, 0, n - 1)
    {
        FOR(j, 0, m - 1)
        {
            if (a[i] == b[j])
            {
                f[i + 1][j + 1] = f[i][j] + 1;
            }
            else
                f[i + 1][j + 1] = max(f[i][j + 1], f[i + 1][j]);
        }
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    ll i = n - 1;
    ll j = m - 1;
    string lcs = "";
    while (i >= 0 && j >= 0)
    {
        if (a[i] == b[j])
        {
            lcs = a[i] + lcs;
            i--;
            j--;
        }
        else if (f[i][j + 1] > f[i + 1][j])
        {
            i--;
        }
        else
            j--;
    }
    cout << lcs;
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