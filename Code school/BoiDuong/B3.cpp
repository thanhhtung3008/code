/*
#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
int m[1000000];
int main()
{
    ifstream cin("test.inp");
    ofstream cout("test.out");
    int n,d;
    while(cin >>n >>d)
    {
        for(int i=1;i<=n;i++)
            cin >> m[i];
        sort(m+1,m+1+n);

        int i=1; int j=n;
        while(i<=j)
        {
            if(m[i]+m[j]<=d)
            {
                res++;
                i++;
                j--;
            }
            else
            {
                j--;
                res++;
            }
        }
        cout << res <<endl;
        res=0;
    }
}
*/
/*
int a[1000000];
int tim(int L,int R,int m)
{
    int kq=-1;
    while(L<=R)
    {
        int mid=(L+R)/2;
        if(a[mid] <=m)
        {
            kq=mid;
            L=mid+1;
        }
        else
            R=mid-1;
    }
    return kq;
}
int main()
{
    //ifstream cin("test.inp");
    //ofstream cout("test.out");
    int n,m;
    cin >> n >>m;
    for(int i=1;i<=n;i++)
        cin >>a[i];
    cout << tim(1,n,m);
    return 0;
}

/*
long long Dec2Bin(int decimalNumber)
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
*/
/*
int main()
{
    int n;
    cin >>n;
    if(n&1==1)
        cout << "Le";
    else cout << "Chan";
}
*/
/*
int main()
{
    int n;
    cin >>n;
    int a[n];
    int res=0;
    for(int i=1;i<=n;i++)
     {
        cin >>a[i];
        res^=a[i];
     }

    cout <<res;
}
*/
