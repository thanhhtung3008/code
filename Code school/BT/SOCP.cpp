#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fi("SOCP.inp");
ofstream fo("SOCP.out");
long long n;
void nhap()
{
    fi >> n;
}
void scp(long long n)
{
    int dem=0;
    for(int i=0;i<=sqrt(n);i++)
    {
        if(pow(i,2)==n)
            dem++;
    }
    if (dem!=0)
        fo << 1;
    else
        fo << 0;
}
int main()
{
    nhap();
    scp(n);
}
