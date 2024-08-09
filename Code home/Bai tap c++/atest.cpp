#include <bits/stdc++.h>
using namespace std;

struct sinhvien
{
    int maso;
    char ten[255];
};
void Nhap(sinhvien ds[], int total)
{
    for (int i = 0; i < total; i++)
    {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << " :" << endl;
        cout << "Nhap ma so: ";
        cin >> ds[i].maso;
        cin.ignore();
        cout << "Nhap ten: ";
        fgets(ds[i].ten, sizeof(ds[i].ten), stdin);
    }
}
void Xuat(sinhvien ds[], int total)
{
    cout << "Stt"
         << "\t"
         << "Ten:" << endl;
    for (int i = 0; i < total; i++)
    {
        cout << ds[i].maso << "\t" << ds[i].ten << endl;
    }
}
int main()
{
    const int total = 3;
    sinhvien ds[total];
    Nhap(ds, total);
    Xuat(ds, total);
    return 0;
}