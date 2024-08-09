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
string a, b;
void magicFunc()
{
    cin >> a >> b;
    while (a.size() < b.size())
    {
        a = "0" + a;
    }
    while (b.size() < a.size())
    {
        b = "0" + b;
    }
    ll nho = 0;
    string s = "";
    FORD(i, a.size() - 1, 0)
    {
        ll v1 = a[i] - '0';
        ll v2 = b[i] - '0';
        ll k = v1 + v2 + nho;
        nho = k / 10;
        s = char(k % 10 + '0') + s;
    }
    if (nho != 0)
        s = "1" + s;
    cout << s;
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