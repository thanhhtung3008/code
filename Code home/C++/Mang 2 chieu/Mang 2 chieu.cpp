#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dong, cot;

    // Nhập số phần tử của mảng 2 chiều
    cout << "Nhap so dong va cot cua mang 2 chieu: ";
    cin >> dong >> cot;
    int m2c[dong][cot];
    for (int i = 0; i < dong; i++)
        for (int j = 0; j < cot; j++)
        {
            cout << "Nhap phan tu thu " << i << j << " :";
            cin >> m2c[i][j];
        }

    // Xuất mảng 2 chiều
    cout << "Phan tu cua mang la:" << endl;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << m2c[i][j] << " ";
        }
        cout << endl;
    }

    // Xuất mảng theo dòng
    int d;
    cout << "Moi nhap vao dong cua mang muon xuat ra: ";
    cin >> d;
    if (d > dong || d < 0)
        cout << "Vui long nhap lai" << endl;
    else if (d >= 0 && d < dong)
    {
        cout << "Phan tu cua dong " << d << " la: " << endl;
        for (int j = 0; j < cot; j++)
        {
            cout << m2c[d][j] << " ";
        }
        cout << endl;
    }

    // Xuất mảng theo cột
    int c;
    cout << "Moi nhap vao cot cua mang muon xuat ra: ";
    cin >> c;
    if (c > cot || c < 0)
        cout << "Vui long nhap lai" << endl;
    else if (c >= 0 && c < cot)
    {
        cout << "Phan tu cua cot " << c << " la: " << endl;
        for (int i = 0; i < dong; i++)
        {
            cout << m2c[i][c] << endl;
        }
    }

    system("pause");
}