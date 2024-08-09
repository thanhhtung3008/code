#include <iostream>
#include <algorithm>

int main() {
    int n, x;
    std::cin >> n >> x;

    int a[n];
    for(int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a, a + n); // Sắp xếp mảng

    int left = 0, right = n - 1, mid, ans = -1;
    while(left <= right) {
        mid = (left + right) / 2;
        if(a[mid] == x) {
            ans = mid + 1; // Tìm thấy x, lưu vị trí
            break;
        } else if(a[mid] < x) {
            left = mid + 1; // Tìm kiếm bên phải
        } else {
            right = mid - 1; // Tìm kiếm bên trái
        }
    }

    std::cout << ans << std::endl; // Xuất kết quả, -1 nếu x không tồn tại trong mảng

    return 0;
}
