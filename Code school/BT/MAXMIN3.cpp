#include <iostream>
#include <fstream>
using namespace std;
ifstream fi("MAXMIN3.inp");
ofstream fo("MAXMIN3.out");
long long a,b,c;
void nhap()
{
    fi >> a>>b >>c;
}
int lon(long long a,long long b)
{
    if(a>b)
        return a;
    else
        return b;
}
int nho(long long a,long long b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    nhap();
    fo << lon(lon(a,b),c)<<endl;
    fo << nho(nho(a,b),c);
}
