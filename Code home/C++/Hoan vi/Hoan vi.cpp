#include <bits/stdc++.h>
using namespace std;

void hoanvi(float *a, float *b)
{
    float tam = *a;
    *a = *b;
    *b = tam;
}
int main()
{
    float a, b;
    cout << "Moi nhap vao 2 so a va b: ";
    cin >> a >> b;
    hoanvi(&a, &b);
    cout << a << " " << b << endl;
    system("pause");
}