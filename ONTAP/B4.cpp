#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

struct HocSinh
{
    string ht;
    string gt;
    string lop;
    float dt;
    float dv;
};

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int n;
    cin >> n;
    HocSinh danhSachHocSinh[n + 1];
    ll u = 1, v = 1;
    for (int i = 1; i <= 2 * n; ++i)
    {
        if (i % 2 != 0)
        {
            cin.ignore();
            getline(cin, danhSachHocSinh[u].ht);
            u++;
        }
        else
        {
            cin >> danhSachHocSinh[v].gt >> danhSachHocSinh[v].lop >> danhSachHocSinh[v].dt >> danhSachHocSinh[v].dv;
            v++;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << i << "/ " << danhSachHocSinh[i].ht << " " << danhSachHocSinh[i].gt << " " << danhSachHocSinh[i].lop << " " << fixed << setprecision(2) << danhSachHocSinh[i].dt + danhSachHocSinh[i].dv << endl;
    }
}
