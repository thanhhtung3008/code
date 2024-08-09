#include <bits/stdc++.h>
using namespace std;

void nhap(int *&A, int n)
{
    A = new int[n];
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<int> dis(1, 100);
    for (int i = 0; i < n; i++)
    {
        *(A + i) = dis(gen);
    }
}

void xuat(int *&A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(A + i) << " ";
    }
}

void hoandoi(int *a, int *b)
{
    int tam;
    tam = *a;
    *a = *b;
    *b = tam;
}

void sapxep(int *&A, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (*(A + i) < *(A + j))
                hoandoi(A + i, A + j);
}

int main()
{
    int *A;
    int n = 10;
    nhap(A, n);
    cout << "Mang ngau nhien: " << endl;
    xuat(A, n);
    cout << endl;
    sapxep(A, n);
    cout << endl;
    xuat(A, n);
    cout << endl;
    system("pause");
}