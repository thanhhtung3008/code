#include <iostream>
using namespace std;

int f(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return f(n - 1) + f(n - 2);
}
int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    int kq = f(n);
    cout << kq << endl;
    system("pause");
}