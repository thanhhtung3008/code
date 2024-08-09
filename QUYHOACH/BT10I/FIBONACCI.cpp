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
int solve(string a, ll k)
{
    ll res = 0;
    FOR(i, 0, a.size() - 1)
    {
        res = (res * 10 + a[i] - '0') % k;
    }
    return res;
}
void chuanhoa(string &a, string &b)
{
    while (a.size() < b.size())
    {
        a = '0' + a;
    }
    while (a.size() > b.size())
    {
        b = '0' + b;
    }
}
string cong(string a, string b)
{
    chuanhoa(a, b);
    string s = "";
    ll nho = 0;
    FORD(i, a.size() - 1, 0)
    {
        ll v1 = a[i] - '0';
        ll v2 = b[i] - '0';
        ll k = v1 + v2 + nho;
        s = char(k % 10 + 48) + s;
        nho = k / 10;
    }
    if (nho != 0)
        s = char(nho + 48) + s;
    return s;
}
void magicFunc()
{
    if (n == 0)
    {
        cout << "0";
        return;
    }
    if (n == 1)
    {
        cout << "1";
        return;
    }
    string fn;
    string f1 = "0";
    string f2 = "1";
    FOR(i, 2, n)
    {
        fn = cong(f2, f1);
        f1 = f2;
        f2 = fn;
    }
    cout << solve(fn, MOD);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> n;
    magicFunc();
    return 0;
}