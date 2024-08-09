#include <bits/stdc++.h>
using namespace std;
bool IsPrime(long long n)
{
       if (n <= 1)
              return false;
       else if (n <= 3)
              return true;
       else if (n % 2 == 0 || n%3==0)
              return false;
       for (long long i = 5; i <= sqrt(n); i +=6)
              if (n % i == 0|| n%(i+2)==0)
                     return false;
       return true;
}
int main()
{
	ifstream cin ("input.inp");
	ofstream cout("output.out");
    long long n;
    cin >> n;
    IsPrime(n);
    for (long long i = 0; i< n; i++)
        if (IsPrime(i) == true)
            cout << i << endl;
}





#include <iostream>
using namespace std;
int main()
{
    int i=1;
    int16_t n;
    cin>>n;
    while(i<=n)
    {
        if(n%2!=0)
        {
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
}
