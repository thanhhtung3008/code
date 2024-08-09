#include <iostream>
#include <fstream>
using namespace std;
ifstream fi("MAXMIN.INP");
ofstream fo("MAXMIN.OUT");
long long a,b;
void nhap()
{
    fi >> a>>b;
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
    fo << lon(a,b)<<endl;
    fo << nho(a,b);
}
