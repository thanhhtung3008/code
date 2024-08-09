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
    while (a.size() > b.size())
    {
        b = "0" + b;
    }
    while (a.size() < b.size())
    {
        a = "0" + a;
    }
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
    FORD(i, a.size() - 1, 0)
    {
        ll v1 = a[i] - 48;
        ll v2 = b[i] - 48;
        ll t = v1 - v2 - nho;
        if (t < 0)
        {
            t += 10;
            nho = 1;
        }
        else
            nho = 0;
        s = char(t + 48) + s;
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
void magicFunc()
{
    string a, b;
    cin >> a;
    cin >> b;
    cout << tru(a, b);
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