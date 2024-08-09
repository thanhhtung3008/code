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
struct hs
{
    string ten, gt, lop;
    float d1, d2;
};
ll n;
hs hocsinh[1001];
void nhap()
{
    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        cin.ignore();
        getline(cin, hocsinh[i].ten);
        cin >> hocsinh[i].gt >> hocsinh[i].lop;
        cin >> hocsinh[i].d1 >> hocsinh[i].d2;
    }
}
void xuat()
{
    for (long long i = 1; i <= n; i++)
        cout << i << "/ " << hocsinh[i].ten << ", " << hocsinh[i].gt << ", " << hocsinh[i].lop << ", " << (hocsinh[i].d1 + hocsinh[i].d2) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();
    xuat();
    return 0;
}