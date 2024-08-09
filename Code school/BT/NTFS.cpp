#include <iostream>
#include <fstream>
using namespace std;
ifstream fi("NTFS.INP");
ofstream fo("NTFS.OUT");
int n;
void nhap()
{
    fi >>n;
}
int ntfs(int n)
{
    int s;
    if (n%4096==0)
        s= (n/1024);
    else
        s=((n/1024)+4);
    return s;
}
int main()
{
    nhap();
    fo << ntfs(n);
}
