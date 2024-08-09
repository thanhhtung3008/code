#include <iostream>
using namespace std;

int main()
{
    /*

    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Vui long nhap lai" << endl;
    }
    else
    {
        int snt = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i != 0)
            {
                bool snt = false;
            }
        }
        if (snt)
        {
            cout << n << " la so nguyen to" << endl;
        }
        else
        {
            cout << n << " khong la so nguyen to" << endl;
        }
    }
        */

    int z;
    cout << "Nhap so nguyen duong: ";
    cin >> z;
    if (z <= 0)
        cout << "Vui long nhap lai" << endl;
    else
    {
        int bd = 0;
        if (z == 2)
            cout << z << " la so nguyen to" << endl;
        else
        {
            for (int i = 3; i < z; i++)
                if (z % i == 0)
                    bd++;
            if (bd == 0)
                cout << z << " la so nguyen to" << endl;
            else
                cout << z << " khong la so nguyen to" << endl;
        }
    }

    system("pause");
}