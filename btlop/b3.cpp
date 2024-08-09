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
ll cow, k;
ll magicFunc(ll cow)
{
    cin >> cow >> k;
    if (cow == 1)
    {
        return 1;
    }
    ll gr = 0;
    for (int i = 1; i <= cow / 2; i++)
    {
        if (abs(i - (cow - i)) == k)
        {
            gr += magicFunc(i);
            gr += magicFunc(cow - i);
            break;
        }
    }
    if (gr == 0)
        gr = 1;
    return gr;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);
    cout << magicFunc(cow);
    return 0;
}