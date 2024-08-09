#include <iostream>
using namespace std;

void dau(float a, float b, char pheptinh)
{
    switch (pheptinh)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Loi" << endl;
        }
        else
        {
            cout << a / b << endl;
            break;
        }
    default:
        cout << "Loi" << endl;
        break;
    }
}
int main()
{
    double a;
    double b;
    char pheptinh;
    cout << "Nhap a va b va nhap phep tinh:";
    cin >> a >> b >> pheptinh;
    dau(a, b, pheptinh);
    system("pause");
}