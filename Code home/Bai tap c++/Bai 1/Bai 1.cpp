#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu A[" << i << "]: ";
        cin >> a[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    cout << "Tong cac phan tu trong mang la: " << s << endl;

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    cout << "So lon nhat la: " << max << endl;

    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = a[0] + a[n - 1];
    }
    cout << "Tong cua so dau va so cuoi la: " << sum << endl;

    cout << "Cac so chan trong mang la: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            cout << a[i] << " ";
    }
    cout << endl;

    int k, l;
    cout << "Nhap vao 1 so nguyen: ";
    cin >> k;
    cout << "So phan tu trong mang giong so vua nhap la: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
            l++;
    }
    cout << l << endl;

    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0 && a[i] > 0)
            t += a[i];
    }
    cout << "Tong cac so le trong mang lon hon 0 la: " << t << endl;

    cout << "Nhung phan tu lon hon bang 0 va be hon bang 10 la: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0 && a[i] <= 10)
            cout << a[i] << " ";
    }
    cout << endl;

    int tam;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
    cout << "Thu tu tang dan cua phan tu trong mang la: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}
