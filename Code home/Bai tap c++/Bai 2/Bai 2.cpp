#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Nhap so hang va cot cua mang: ";
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cout << "Nhap phan tu A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }

    int s = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            s += a[i][j];
    cout << "Tong cac phan tu cua mang la: " << s << endl;

    int t = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] % 5 == 0)
                t += a[i][j];
    cout << "Tong cac phan tu cua mang la: " << t << endl;

    system("pause");
    return 0;
}