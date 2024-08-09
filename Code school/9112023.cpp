#include <bits/stdc++.h>
using namespace std;
int hoandoi(int &n)
{
    int s=0,d;
    while(n!=0)
    {
        d=n%10;
        s=s*10 + d;
        n/=10;
    }
    return s;
}

int muoisanghai(int &n)
{
    int s=0,d;
    while(n!=0)
    {
        d=n%2;
        s=s*10 + d;
        n/=2;
    }
    return s;
}

int muoisangmuoisau(int &n)
{
    int s=0,d;
    while(n!=0)
    {
        d=n%16;
        s=s*10 + d;
        n/=16;
    }
    return s;
}

int haisangmuoi(int &n)
{
    int s=0,p=0;
    while(n>0) 10110
    {
        s+=(n%10)*pow(2,p);
        ++p;
        n=n/10;

    }
    return s;
}

int muoisausangmuoi(int &n)
{
    int s=0,p=0;
    while(n>0)
    {
        s+=(n%10)*pow(16,p);
        ++p;
        n=n/10;

    }
    return s;
}
int main()
{
    ifstream cin("hello.inp");
    ofstream cout("hello.out");
    int n,a;
    cin >>n;
    cout << muoisausangmuoi(n);


}
