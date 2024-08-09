/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxnn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
int dp[maxnn][maxnn];
void magicFunc()
{
    int n, w;
    cin >> n >> w;
    int a[n + 1], c[n + 1];
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
    cout << dp[n][w] << endl;
    FOR(i, 1, n)
    {
        FOR(j, 1, w)
        cout << dp[i][j] << " ";
        cout << endl;
    }
}

/*
void magicFunc()
{
    ll n;
    cin >> n;
    int a[n];
    vector<ll> dp(n, 1);
    // memset(dp, 1, sizeof(dp));
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
    FOR(i, 0, n - 1)
    {
        for (ll j = 0; j < i; j++)
            if (a[j] < a[i])
                dp[i] = max(dp[i], dp[j] + 1);
    }
    cout << *max_element(dp.begin(), dp.end());
}*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    magicFunc();
    path();
    return 0;
}
/*
Chọn n gói hàng, gói hàng thứ i có khối lượng là a[i] và giá trị c[i]. cần chọn những gói hàng nào để bỏ vào một balo sao cho tổng không vượt qu M cho truớc
*/