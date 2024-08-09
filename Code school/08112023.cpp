#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,i=1,rem;
    cin >> n;
    /*
    while(n>0)
    {
        rem=n%2;
        sum=sum + (i*rem);
        n=n/2;
        i=i*10;
    }
    cout << sum;*/
    /*
    char a[2000];
    int x,dem=0;
    while (n>0)
    {
        x=n%16;
        n/=16;
        if (x>=10)
            a[dem]=x-10 + 'A';
        else
            a[dem] = x+'0';
        dem ++;
    }
    cout << strrev(a);
    */
    char a[100];
    cin >> a;
    cout << strrev(a);
    return 0;
}
