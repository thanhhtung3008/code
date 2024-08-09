// #include <algorithm> : sắp xếp phần tử mảng.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int array[n];
    // Nhập phần tử mảng.
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i << " cua mang: ";
        cin >> array[i];
    }

    // Tỉnh tổng các phần tử trong mảng.
    for (int i = 0; i < n; i++)
    {
        s += array[i];
    }
    cout << "Tong cac phan tu trong mang la: " << s << endl;

    // Xếp phần tử trong mảng.
    // sort : nhỏ đến lớn
    // reverse : đảo ngược

    // Nhỏ đến lớn
    sort(array, array + n);
    cout << "Xep phan tu trong mang tu nho den lon la: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Đảo ngược
    reverse(array, array + n);
    cout << "Mang sau dao nguoc la: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Random number
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 100);
    int mang[10];
    for (int i = 0; i < size(mang); i++)
    {
        mang[i] = dis(gen);
        cout << mang[i] << " ";
    }

    system("pause");
    return 0;
}