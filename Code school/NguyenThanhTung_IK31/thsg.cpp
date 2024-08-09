#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    long long cs = s.length(), tcs =0;
    for (long long i=0; i<cs;i++)
    {
        tcs += s[i];
    }
    if(tcs%cs==0)
        cout << 1;
    else cout << 0;
    return 0;
}
