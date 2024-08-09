#include <iostream>
using namespace std;

int main()
{
    int n, tong;
    cout << "Nhap so nguyen: ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    if (tong == n)
    {
        cout << n << " la so hoan hao" << endl;
    }
    else
        cout << n << " khong la so hoan hao" << endl;
    system("pause");
}