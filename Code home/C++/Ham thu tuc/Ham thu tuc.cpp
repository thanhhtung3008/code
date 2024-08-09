#include <iostream>
using namespace std;

void hocsinh(float diemvan)
{
    cout << "Ten: Nam" << endl;
    cout << "Ma so HS: 10" << endl;
    cout << "Lop: 10A1" << endl;
    cout << "Diem toan: 9.5" << endl;
    cout << "Diem li: 7.0 " << endl;
    cout << "Diem hoa: 8.5" << endl;
    cout << "Diem van: " << diemvan << endl;
}
int main()
{
    float v;
    cout << "Nhap diem van: ";
    cin >> v;
    hocsinh(v);
    system("pause");
}
/*
•	Tên: Nam
•	Mã số HS: 10
•	Lớp: 10A1
•	Điểm toán: 9.5
•	Điểm lý: 7.0
•	Điểm hóa: 8.5

*/