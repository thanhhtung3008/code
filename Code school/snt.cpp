#include <bits/stdc++.h>
using namespace std;
bool check[100001];
void sangnt()
{
    for(long long i=0;i<100001;i++)
        check[i]=true;
    check[0]=false;
    check[1]=false;
    for(long long i=2;i<100001;i++)
        if(check[i]==true)
            for(long long j=2*i;j<100001;j+=i)
                check[j]=false;
}
long long t(string n)
{
    long long s=0;
    for(long long i=0;i<n.size();i++)
    {
        s=s*10+(n[i]-'0');
        if(n[i]-'0'<0 || n[i]-'0'>9)
            return s;

    }
    return s;
}
int main()
{
    sangnt();
    cout << check[23];
}
