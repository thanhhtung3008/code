/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
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
string x, y;
void up(char &a)
{
    if (a >= 'A' && a <= 'Z')
    {
        return;
    }
    a = char(a - 32);
}
void magicFunc()
{
    cin >> x >> y;
    FOR(i, 0, x.size() - 1)
    {
        up(x[i]);
        up(y[i]);
    }
    if (x < y)
    {
        cout << -1;
    }
    else if (x == y)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
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