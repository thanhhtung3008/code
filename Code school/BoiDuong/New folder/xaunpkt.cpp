#include <bits/stdc++.h>
using namespace std;
int k,a[100],ok;
string n;
void sinh()
{
    int i=n.size()-1;
    while(i>=1&&n[i]=='1')
    {
        n[i]='0';
        --i;
        if(n[i]=='0')
        {
            n[i]='1';
            ok=0;
            break;
        }
    }
    if(n[0]=='1'&&n[1]!='1')
    {
        n[0]='0';
        ok=0;
    }

}
int main()
{
    ifstream cin("input.inp");
    ofstream cout("output.out");
    int t;
    cin >>t;
    while(t>0)
    {
        cin >>n;
        ok=1;
        while(ok)
        {
            sinh();
            cout << n;
        }
        t--;
    }

}
