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
string nhan1(string a, char b, ll l)
{
    ll nho = 0;
    string s = "";
    FORD(i, a.size() - 1, 0)
    {
        ll v = a[i] - 48;
        ll k = v * (b - 48) + nho;
        s = char(k % 10 + 48) + s;
        nho = k / 10;
    }
    if (nho != 0)
    {
        s = char(nho + 48) + s;
    }
    s.insert(s.size(), l, '0');
    return s;
}
string nhannhieu(string a, string b)
{
    string s = "0";
    FORD(i, b.size() - 1, 0)
    {
        string k = nhan1(a, b[i], b.size() - 1 - i);
        s = cong(s, k);
        // cout << k << " " << s << endl;
    }
    return s;
}
void magicFunc()
{
    string a;
    string b;
    cin >> a >> b;
    cout << nhannhieu(a, b);
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