#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int a,b;
void nhap()
{
    cin >> a>>b;
}
int lon(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int nho(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    ifstream cin("BAI1.inp");
    ofstream cout("BAI1.out");
    nhap();
    cout << lon(a,b)<<endl;
    cout << nho(a,b);
}
