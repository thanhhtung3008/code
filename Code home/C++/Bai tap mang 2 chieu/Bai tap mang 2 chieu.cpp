#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Random giá trị của mảng
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<int> dist(1, 100);
    int array[4][6];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
        {
            array[i][j] = dist(gen);
        }

    // Xuất các giá trị của mảng
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }

    // Tìm số lớn nhất
    int max = 0;
    cout << "So lon nhat la: ";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            if (array[i][j] > max)
                max = array[i][j];
    cout << max << endl;

    // Tìm số nhỏ nhất
    int min = array[1][1];
    cout << "So nho nhat la: ";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            if (array[i][j] < min)
                min = array[i][j];
    cout << min << endl;

    // TÍnh tổng các phần tử
    int s = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            s += array[i][j];
    cout << "Tong cac phan tu trong mang la: " << s << endl;

    // Kiểm trả số
    int n, vt = 0;
    cout << "Nhap so can kiem tra: ";
    cin >> n;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            if (n == array[i][j])
                vt++;
    if (vt == 0)
        cout << n << " khong thuoc mang" << endl;
    else
    {
        cout << n << " thuoc mang" << endl;
        cout << "So do duoc lap lai " << vt << " lan trong mang" << endl;
    }

    system("pause");
}