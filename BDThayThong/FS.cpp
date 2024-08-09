/*
#include <iostream>
#include <vector>
using namespace std;

int minWaysToReachTarget(vector<int> &arr, int n, int T)
{
    vector<vector<int>> dp(n + 1, vector<int>(T + 1, INT_MAX));
    for (int i = 0; i <= n; ++i)
    {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= n; ++i)
    {

        for (int j = 1; j <= T; ++j)
        {

            if (arr[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }

            else
            {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - arr[i - 1]] + 1);
            }
        }
    }

    return dp[n][T];
}

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int n, T;
    cin >> n >> T;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int minWays = minWaysToReachTarget(arr, n, T);

    cout << minWays << endl;

    return 0;
}*/
#include <iostream>
#include <vector>

using namespace std;

int countWaysToSum(int T, vector<int> &a)
{
    int n = a.size();
    vector<vector<int>> dp(n + 1, vector<int>(T + 1, 0));
    for (int i = 0; i <= n; ++i)
        dp[i][0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= T; ++j)
        {

            if (a[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - a[i - 1]];
        }
    }
    return dp[n][T];
}

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    vector<int> a = {1, 2, 5, 4, 6};
    int T = 8;
    cout << countWaysToSum(T, a) << endl;
    return 0;
}
