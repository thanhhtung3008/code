#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

const int MAX = 100;
const int INF = INT_MAX;

int m, n;
int a[MAX + 1][MAX + 1];  // Bảng giá trị
int dp[MAX + 1][MAX + 1]; // Bảng tổng giá trị nhỏ nhất

// Hàm chính
int main() {
    // Đọc vào dữ liệu
    cin >> m >> n;

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }

    // Khởi tạo cột đầu tiên
    for (int i = 1; i <= m; ++i) {
        dp[i][1] = a[i][1];
    }

    // Cập nhật các giá trị DP
    for (int j = 2; j <= n; ++j) { // Duyệt qua từng cột từ trái sang phải
        for (int i = 1; i <= m; ++i) { // Duyệt qua từng hàng trong cột
            // Di chuyển từ ô trên
            if (i > 1) {
                dp[i][j] = min(dp[i][j], dp[i-1][j] + a[i][j]);
            }
            // Di chuyển từ ô dưới
            if (i < m) {
                dp[i][j] = min(dp[i][j], dp[i+1][j] + a[i][j]);
            }
            // Di chuyển từ ô trái
            dp[i][j] = min(dp[i][j], dp[i][j-1] + a[i][j]);
            // Di chuyển từ ô phải (nếu cần, nhưng trong trường hợp này không cần vì chúng ta chỉ di chuyển từ trái sang phải)
        }
    }

    // Tìm giá trị nhỏ nhất ở cột cuối cùng
    int minSum = INF;
    for (int i = 1; i <= m; ++i) {
        minSum = min(minSum, dp[i][n]);
    }

    // In kết quả
    cout << minSum << endl;

    return 0;
}
