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
ll tongcs(string a)
{
    ll s = 0;
    FOR(i, 0, a.size() - 1)
    {
        s += a[i] - 48;
    }
    return s;
}
void magicFunc()
{
    string a;
    cin >> a;
    FOR(i, 0, a.size() * 9)
    {
        string d = to_string(i);
        string n = tru(a, d);
        if (tongcs(n) == i && n > "0")
        {
            cout << n;
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