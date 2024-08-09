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
struct toado
{
    ll x, y;
};
toado tg[4];
void nhap()
{
    FOR(i, 1, 3)
    {
        ll u, v;
        cin >> u >> v;
        tg[i].x = u;
        tg[i].y = v;
    }
}
double canh(ll x1, ll y1, ll x2, ll y2)
{
    return sqrt(pow((x2-x1),2) + pow((y2 - y1),2));
}
double a, b, c;
void bcanh()
{
    a = canh(tg[1].x, tg[1].y, tg[2].x, tg[2].y);
    b = canh(tg[2].x, tg[2].y, tg[3].x, tg[3].y);
    c = canh(tg[3].x, tg[3].y, tg[1].x, tg[1].y);
    //cout << a << " " << b << " " << c;
}
 bool check(ll a, ll b, ll c)
 {
     if (a + b > c || a + c > b || b + c > a)
         return true;
     return false;
 }
 ll chuvi(ll a, ll b, ll c)
 {
     return a + b + c;
 }
 void magicFunc()
 {
     nhap();
     bcanh();
     if (check(a, b, c) == 1)
     {
         ll r = (chuvi(a, b, c) / 2);

         cout << chuvi(a, b, c)<<endl;
                  cout << sqrt(r * (r - a) * (r - b) * (r - c));
     }
     else
         cout << -1;
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
