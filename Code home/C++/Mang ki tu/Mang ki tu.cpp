#include <bits/stdc++.h>
using namespace std;

int main()
{

    string *chuoi;
    chuoi = new string[100];
    cin >> *chuoi;
    cout << "Xin chao " << *chuoi << endl;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    const int max = 15;
    char chuoi1[max];
    cout << "Nhap chuoi: ";
    cin.getline(chuoi1, max);
    cout << chuoi1 << endl;

    cout << "Hello" << endl;
    char chuoi2[100];
    strcpy_s(chuoi2, sizeof(chuoi2), chuoi1);
    cout << chuoi2 << endl;
    strncpy_s(chuoi2, sizeof(chuoi2), chuoi1, 6);
    cout << chuoi2 << endl;

    system("pause");
    return 0;
}