
#include <bits/stdc++.h>

using namespace std;
int m, n;
int a[10009][10009];
double dp[10009][10009];
void nhap()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void xuat()
{
    for (int i = 1; i <= m; i++)
    {
        dp[i][1] = a[i][1];
    }
    for (int j = 2; j <= n; j++)
    {
        for (int i = 1; i <= m; i++)
        {
            if (a[i][j] < 0)
            {
                dp[i][j] = max({dp[i - 1][j - 1], dp[i][j - 1], dp[i + 1][j - 1]}) / abs(a[i][j]);
            }
            else
                dp[i][j] = dp[i][j] = max({dp[i - 1][j - 1], dp[i][j - 1], dp[i + 1][j - 1]}) + a[i][j];
        }
    }
    double ans = INT_MIN;
    for (long long i = 1; i <= m; i++)
    {
        ans = max(ans, dp[i][n]);
    }
    cout << fixed << setprecision(3) << ans;
}
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    nhap();
    xuat();
    return 0;
}
