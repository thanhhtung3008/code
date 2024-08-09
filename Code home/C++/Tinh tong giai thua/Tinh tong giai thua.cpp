#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so can tinh tong giai thua: ";
    cin >> n;
    int gt = 1;
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        gt = gt * i;
        tong += gt;
    }
    cout << "Tong cac giai thua la: " << tong << endl;
    system("pause");
}
