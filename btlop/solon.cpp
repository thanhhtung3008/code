/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)
#define bignum string
const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

void chuanhoa(bignum &a, bignum &b)
{
    while (a.size() < b.size())
    {
        a = '0' + a;
    }
    while (b.size() < a.size())
    {
        b = '0' + b;
    }
}
string tru(string a, string b)
{
    bool am = false;
    if (a < b)
    {
        swap(a, b);
        am = true;
    }
    ll nho = 0;
    string s = "";
    FORD(i, a.size() - 1, 0)
    {
        ll v1 = a[i] - 48;
        ll v2 = b[i] - 48;
        ll temp = v1 - v2 - nho;
        if (temp < 0)
        {
            s = char(temp + 10 + '0') + s;
            nho = 1;
        }
        else
        {
            s = char(temp + '0') + s;
            nho = 0;
        }
    }
    while (s[0] == '0')
    {
        s.erase(0, 1);
    }
    if (s.empty())
        return "0";
    if (am)
        return '-' + s;
    return s;
}
string cong(string a, string b)
{
    chuanhoa(a, b);
    ll k, t, nho = 0;
    string s = "";
    FORD(i, a.size() - 1, 0)
    {
        ll v1 = a[i] - 48;
        ll v2 = b[i] - 48;
        s = char((v1 + v2 + nho) % 10 + 48) + s;
        nho = (v1 + v2 + nho) / 10;
    }
    if (nho == 1)
    {
        s = char(nho + 48) + s;
    }
    return s;
}
string nhan1so(string a, int n, int l)
{
    ll nho = 0;
    string s = "";
    FORD(i, a.size() - 1, 0)
    {
        ll v1 = a[i] - 48;
        ll k = v1 * n + nho;
        s = char((k % 10) + 48) + s;
        nho = k / 10;
    }
    if (nho > 0)
    {
        s = char(nho + 48) + s;
    }
    s.insert(s.size(), l, '0');
    return s;
} 
string nhannhieuso(string a, string b)
{
    string s = "";
    FORD(i, b.size() - 1, 0)
    {
        char vt2 = b[i] - 48;
        string k = nhan1so(a, vt2, b.size() - i - 1);
        s = cong(s, k);
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    string a, b;
    cin >> a >> b;
    cout << cong(a, b) << " \n";
    cout << tru(a, b) << "\n";
    cout << nhannhieuso(a, b);
    return 0;
}
