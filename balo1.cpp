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
ll n, a[maxn], c[maxn], w, dp[maxn][maxn];
void magicFunc()
{
    memset(dp, 0, sizeof(dp));
    cin >> n >> w;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    FOR(i, 1, n)
    {
        cin >> c[i];
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, w)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= a[i])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + c[i]);
        }
    }
    cout << dp[n][w];
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
/*
Chọn n gói hàng, gói hàng thứ i có khối lượng là a[i] và giá trị c[i]. cần chọn những gói hàng nào để bỏ vào một balo sao cho tổng không vượt qu M cho truớc
*/