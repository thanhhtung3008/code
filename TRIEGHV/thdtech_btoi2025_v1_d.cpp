#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 10;
const int INF = 1e9;

int n;
int pos[MAXN];
int dp[MAXN][MAXN];

int solve()
{
    // Khởi tạo giá trị ban đầu cho dp
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    // Quy hoạch động
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (pos[k] > pos[j])
                {
                    dp[i][k] = min(dp[i][k], dp[i - 1][j] + 1);
                }
            }
        }
    }

    // Tìm đáp án
    int ans = INF;
    for (int i = 0; i < n; ++i)
    {
        ans = min(ans, dp[n][i]);
    }
    return ans;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> pos[i];
    }

    cout << solve() << endl;
    return 0;
}