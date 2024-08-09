#include <bits\stdc++.h>
using namespace std;

int main()
{
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<int> dist(1, 100);

    // Random giá trị trong mảng
    int array[7];
    for (int i = 0; i < size(array); i++)
    {
        array[i] = dist(gen);
    }

    // Xuất các giá trị trong mảng
    cout << "Cac gia tri trong mang la: ";
    for (int i = 0; i < size(array); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Đảo ngược mảng
    reverse(array, array + size(array));
    cout << "Cac gia tri trong mang sau khi dao nguoc la: ";
    for (int i = 0; i < size(array); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Sắp xếp mảng tăng dần
    sort(array, array + size(array));
    cout << "Thu tu tang dan cua cac phan tu trong mang la: ";
    for (int i = 0; i < size(array); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Tỉnh tổng phần tử trong mảng
    int s = 0;
    for (int i = 0; i < size(array); i++)
    {
        s += array[i];
    }
    cout << "Tong cac phan tu trong mang la: " << s;
    cout << endl;

    // Kiểm tra số N có thuộc mảng hay không và xuất ra vị trí N;
    float n;
    cout << "Nhap vao so can kiem tra: ";
    cin >> n;
    int vt, dem = 0;
    for (int i = 0; i < size(array); i++)
    {
        if (n == array[i])
        {
            dem++;
            vt = i;
        }
    }
    if (dem == 0)
        cout << n << " khong thuoc mang";
    else
    {
        cout << n << " thuoc mang" << endl;
        cout << "Vi tri cua " << n << " trong mang la: " << vt;
    }
    cout << endl;

    system("Pause");
    return 0;
}