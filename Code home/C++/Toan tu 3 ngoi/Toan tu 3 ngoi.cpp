#include <iostream>
using namespace std;
int main()
{
    float dtb;
    cout << "Nhap vao diem trung binh: ";
    cin >> dtb;
    string ketqua = (dtb >= 8) ? "Gioi" : ((dtb >= 6.5 && dtb < 8) ? "Kha" : (dtb >= 5 && dtb < 6.5) ? "Trung Binh"
                                                                                                     : "Yeu");
    cout << ketqua << endl;
    system("Pause");
}