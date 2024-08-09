#include <iostream>
#include <fstream>
using namespace std;
ifstream fi("BAI14.INP.INP");
ofstream fo("BAI14.INP.OUT");
int rev(int n)
{
    int s=0;
    while(n!=0)
    {
        int t=n%10;
        s=s*10+t;
        n=n/10;
    }
    return s;
}
int uocchung(int a,int b)
{
    if (a==0 || b==0)
        return a+b;
    while(a!=b)
    {
        if(a<b)
            b=b-a;
        else
            a=a-b;
    }
    return a;
}
int main()
{
    int dem=0;
    int a,b;
    fi >> a >>b;
    for(int i=a;i<=b;i++)
    {
        if(uocchung(i,rev(i))==1)
            dem++;
    }
    fo << dem;
}
