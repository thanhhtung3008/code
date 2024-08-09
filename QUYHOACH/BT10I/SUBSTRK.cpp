#include <iostream>
#include <vector>
using namespace std;

// Hàm đếm số lượng xâu con chứa đúng K ký tự '1'
int countSubstringsWithKOnes(const string &s, int K)
{
    int n = s.length();
    vector<int> ones(n + 1, 0); // Mảng lưu số lượng '1' đến vị trí hiện tại
    vector<vector<int>> dp(n + 1, vector<int>(K + 1, 0));

    // Tính số lượng '1' đến mỗi vị trí
    for (int i = 1; i <= n; ++i)
    {
        ones[i] = ones[i - 1] + (s[i - 1] == '1');
    }

    // Khởi tạo trường hợp cơ bản
    for (int i = 0; i <= n; ++i)
    {
        dp[i][0] = 1;
    }

    // Áp dụng quy hoạch động để tính toán
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= min(K, ones[i]); ++j)
        {
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            if (s[i - 1] == '1' && j == ones[i])
            {
                dp[i][j]--;
            }
        }
    }

    // Tổng hợp kết quả từ các vị trí cuối cùng của xâu
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (ones[i] >= K)
        {
            count += dp[i][K];
        }
    }

    return count;
}

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    string binaryString; // Xâu nhị phân w
    int K;               // Giá trị K
    cout << "Enter the binary string: ";
    cin >> binaryString;
    cout << "Enter the value of K: ";
    cin >> K;
    cout << "Number of substrings with exactly " << K << " ones: "
         << countSubstringsWithKOnes(binaryString, K) << endl;
    return 0;
}
