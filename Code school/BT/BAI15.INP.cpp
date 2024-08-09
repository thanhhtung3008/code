#include <iostream>
#include <fstream>
using namespace std;
ifstream fi("BAI15.INP.INP");
ofstream fo("BAI15.INP.OUT");
int scs(int a)
{
    int dem=0;
    while(a!=0)
    {
        a=a/10;
        dem++;
    }
    return dem;
}
int tcs(int a)
{
    int s=0;
    while(a!=0)
    {
        int t=a%10;
        s+=t;
        a=a/10;
    }
    return s;
}
int main()
{
    int a;
    fi >>a;
    int dem=0;
    for(int i=1;i<=a;i++)
        if(tcs(i)%scs(i)==0)
            dem++;
    fo << dem;
}
