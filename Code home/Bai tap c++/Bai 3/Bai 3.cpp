#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char t;
    int k, n = 0;
    cout << "Nhap vao chuoi ki tu: ";
    cin >> s;

    int max = size(s);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Nhap vao so ngau nhien: ";
    cin >> k;
    cout << "Ki tu thu " << k << " la: " << s[k] << endl;

    cout << "Nhap vao 1 ki tu trong mang: ";
    cin >> t;
    for (int i = 0; i < size(s); i++)
        if (s[i] == t)
            n++;
    cout << "Co " << n << " ki tu " << t << " trong chuoi tren" << endl;

    int index = -1;
    for (int i = 0; i < size(s); i++)
        if (t == s[i])
        {
            index = i;
            break;
        }
    cout << "Vi tri cua " << t << " trong chuoi la: " << index << endl;

    /*
    for (int i = 0; i < size(s); i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    cout << s << endl;

    for (int i = 0; i < size(s); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    cout << s << endl;
    */

    int count = 0;
    for (int i = 0; i < size(s); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            count++;
    cout << "So ki tu in hoa la: " << count << endl;

    system("pause");
    return 0;
}