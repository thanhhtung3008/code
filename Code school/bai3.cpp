#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10000000];
void snt()
{
    for (int i=0;i<size(a);i++)
        a[i] = true;
    a[0]=a[1]=false;
    for (int i=0;i<sqrt(size(a));i++)
    {
        if (a[i] == true)
            for (int j=i*i;j<size(a);j+=i)
                a[j] = false;
    }
}
int main()
{
    int s=0;
    int n;
    cin >> n;
    for (int i=1;i<=n;i+=1)
    {

        s+=float(i)/(i+1);
        cout << i << " " << s << endl;
    }

}
