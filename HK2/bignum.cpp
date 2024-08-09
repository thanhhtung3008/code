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
void chuanhoa(string &a, string &b)
{
    while (a.size() < b.size())
    {
        a = "0" + a;
    }
    while (b.size() < a.size())
    {
        b = "0" + b;
    }
}
string cong(string a, string b)
{
    chuanhoa(a, b);
    ll nho = 0;
    string s = "";
    FORD(i, a.size() - 1, 0)
    {
        ll v1 = a[i] - 48;
        ll v2 = b[i] - 48;
        ll k = v1 + v2 + nho;
        s = char(k % 10 + 48) + s;
        nho = k / 10;
    }
    if (nho != 0)
    {
        s = "1" + s;
    }
    return s;
}
string tru(string a, string b)
{
    chuanhoa(a, b);
    string s = "";
    bool am = false;
    if (a < b)
    {
        am = true;
        swap(a, b);
    }
    ll nho = 0;
    for (ll i = a.size() - 1; i >= 0; i--)
    {
        ll v2 = b[i] - 48;
        ll v1 = a[i] - 48;
        ll k = v1 - v2 - nho;
        if (k < 0)
        {
            k += 10;
            nho = 1;
        }
        else
            nho = 0;
        s = char(k % 10 + 48) + s;
    }
    while (s[0] == '0')
    {
        s.erase(0, 1);
    }
    if (am)
    {
        s = "-" + s;
    }
    return s;
}
int big(string a, string b)
{
    chuanhoa(a, b);
    if (a > b)
        return 1;
    return 0;
}
int small(string a, string b)
{
    chuanhoa(a, b);
    if (a > b)
        return 0;
    return 1;
}
ll ls;
string dp[maxn];
string a;
void taof()
{
    string f1 = "0", f2 = "1";
    dp[0] = "0";
    dp[1] = "1";
    string f3 = cong(f1, f2);
    ls = 1;
    while (small(f3, a))
    {
        ls++;
        dp[ls] = f3;
        f1 = f2;
        f2 = f3;
        f3 = cong(f1, f2);
    }
}
void magicFunc()
{

    string s = dp[ls];
    while (a != "0")
    {
        cout << s << endl;
        a = tru(a, s);
        if (a < "1")
            break;
        while (big(dp[ls], a))
        {
            ls--;
        }
        s = dp[ls];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> a;
    taof();
    magicFunc();
    return 0;
}