#include <bits/stdc++.h>
using namespace std;
int n,k,ok;
string a;
void ktao()
{
    for(int i=1;i<=k;i++)
        a[i]='A';
}
void sinh()
{
    int i=k;
    while(i>=1&&a[i]=='B')
        --i;
    if(i==0)
        ok=0;
    else
    {
        a[i]='B';
    for(int j=i+1;j<=k;j++)
        a[j]='A';
    }
}
int main()
{
    ifstream cin("bai2.inp");
    ofstream cout("bai2.out");
    int t;
    cin >>t;
    while(t>0)
    {
        cin>>k;
        ok=1;
        ktao();
        while(ok)
        {
            for(int i=1;i<=k;i++)
                cout << a[i];
            cout << " ";
            sinh();
        }
        cout << endl;
        t--;
    }
}
