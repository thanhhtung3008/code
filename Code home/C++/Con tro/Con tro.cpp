#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nhietdo = 48;
    cout << "Vi tri cua nhietdo la: " << &nhietdo << endl; // &variable: vị trí của biến

    // Khai báo con trỏ
    int *contro;
    contro = new int;

    contro = &nhietdo;
    cout << contro << endl;
    cout << *contro << endl;

    *contro = 100;
    cout << "Nhiet do bang: " << nhietdo << endl;

    system("pause");
}