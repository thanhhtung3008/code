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
ll tinh(ll x1, ll y1, ll x2, ll y2)
{
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}
void magicFunc()
{
    ll xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xc >> yc;
    ll AB2 = tinh(xa, ya, xb, yb);
    ll AC2 = tinh(xa, ya, xc, yc);
    ll BC2 = tinh(xb, yb, xc, yc);
    if (sqrt(AB2) + sqrt(BC2) <= sqrt(AC2) || sqrt(AB2) + sqrt(AC2) <= sqrt(BC2) || sqrt(AC2) + sqrt(BC2) < sqrt(AB2))
    {
        cout << "khong la tam giac";
    }
    else if (AB2 + BC2 == AC2 || AB2 + AC2 == BC2 || AC2 + BC2 == AB2)
    {
        cout << "vuong";
    }
    else if (AB2 == BC2 || AB2 == AC2 || AC2 == BC2)
    {
        cout << "can";
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