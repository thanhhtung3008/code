/*
#include <bits/stdc++.h>
using namespace std;
int a[100],p1[100];
int b[100][100],p2[100][100];
int main()
{
    int n;
    cin >>n;
    p1[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        p1[i]=p1[i-1]+a[i];
    }
    int q;
    cin >>q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << p1[r]-p1[l-1];
    }
    int n,m;
    cin >> n>>m;
    p2[n][m]={0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> b[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            p2[i][j]=p2[i][j-1]+p2[i-1][j]-p2[i-1][j-1]+b[i][j];
        }
    }
    int q;
    cin >> q;
    while(q--)
    {
        int u1,v1,u2,v2;
        cin >> u1>>v1>>u2>>v2;
        cout << p2[u2][v2]-p2[u1-1][v2]-p2[u2][v1-1]+p2[u1-1][v1-1];
    }
}
*/

#include <bits/stdc++.h>
using namespace std;
string cong(string a,string b)
{
    while(a.size()<b.size())
        a="0"+a;
    while(b.size()<a.size())
        b="0"+b;
    string res="";
    int nho=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        int t=(a[i]-48)+(b[i]-48)+nho;
        res=char(t%10+48)+res;
        nho=t/10;
    }
    if (nho>0)
        res=char(nho+'0')+res;
    return res;
}
string tru(string a,string b)
{
    while(a.size()<b.size())
        a="0"+a;
    while(b.size()<a.size())
        b="0"+b;
    string res="";
    int nho=0;
    bool kq=true;
    if (a<b)
    {
        swap(a,b);
        kq=false;

    }
    for(int i=a.size()-1;i>=0;i--)
    {
        int t=(a[i]-48)-(b[i]-48)-nho;
        if(a[i]>b[i])
        {
            res=char(t+48)+res;
            nho=0;
        }
        else
        {
            res=char(t+10+48)+res;
            nho=1;
        }
    }
    if(kq==false)
        res="-"+res;
    return res;
}
string nhan1(string a,char m)
{
    int nho=0;
    string res="";
    for(int i=a.size()-1;i>=0;i--)
    {
        int t=(a[i]-48)* (m-48)+nho;
        res=char(t%10+48)+res;
        nho=t/10;
    }
    if(nho>0)
        res=char(nho+'0')+res;
    return res;
}
string nhannhiu(string a,string b)
{
    string o="",res="";
    for(int i=a.size()-1;i>=0;i--)
    {
        string t=string(nhan1(a,b[i])) +o;
        res=cong(t,res);
        o='0'+o;
    }
    return res;
}
int main()
{
    string a,b;

    cin >> a >>b;
    cout << nhannhiu(a,b);
}

