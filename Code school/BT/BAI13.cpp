#include <iostream>
#include <fstream>
using namespace std;
ifstream fi("BAI13.inp");
ofstream fo("BAI13.out");
void sole(int m,int n)
{
    for (int i=m;i<=n;i++)
    {
        if (i%2==0)
            continue;
        fo << i << " ";
    }
}
int main()
{
    int m,n;
    fi >> m >> n;
    sole(m,n);
}

