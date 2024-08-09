/*
#include <bits/stdc++.h>
using namespace std;

string tru(string s1,string s2)
{

    while(s1.size()<s2.size())
        s1="0"+s1;
    while(s2.size()<s1.size())
        s2="0"+s2;
    bool ok=false;
    if (s1<s2)
    {
        swap(s1,s2);
        ok=true;
    }
    string res="";
    int nho=0;
    for (int i=s2.size()-1;i>=0;i--)
    {
        int s=int(s1[i]-48)-int(s2[i]-48)-nho;
        if (s<0)
        {
            res=char(s+10+'0')+res;
            nho=1;
        }
        else res=char(s+'0')+res;
    }
    if (ok==true)
        res="-"+res;
    return res;
}
string nhan(string n,char m)
{
    string kq="";
    int nho=0;
     for (int i=n.size()-1;i>=0;i--)
     {
         kq=char (((n[i]-48)*(m-48)+nho)%10+'0')+kq;
         nho=((n[i]-48)*(m-48)+nho)/10;
     }
     if (nho>0) kq=char(nho+'0')+kq;
     return kq;
}
string cong(string n,string m)
{
    string kq="";
     while (n.size() <m.size())
    {
        n= '0'+ n;
    }
    while (n.size() >m.size())
    {
        m= '0'+ m;
    }
    bool q=0;
    for (int i=m.size()-1;i>=0;i--)
    {
        kq=char ((n[i]-48+m[i]-48+q)%10+'0')+kq;
        q=(n[i]-48+m[i]-48+q)/10;
    }
    if (q==1) kq='1'+kq;
    return  kq;
}
string nhannhiuso(string n,string m)
{
    string kq="";
    string o="";
    for (int i=m.size()-1;i>=0;i--)
    {
        string l=nhan(n,m[i])+o;
        kq=cong(kq,l);
        o='0'+o;
    }
    return kq;
}
int main()
{
    string n;
    string m;
    cin>>n>>m;
    cout <<nhannhiuso(n,m);
}


*/
