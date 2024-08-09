#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
ifstream fi("PTB1.INP");
ofstream fo("PTB1.OUT");
void bacnhat(double a,double b)
{
    if (a==0)
        if (b==0)
            fo << "Vo So Nghiem";
        else
            fo << "Vo Nghiem";
    else
        fo << fixed << setprecision (2) << (-b/a);
}
int main()
{
    double a,b;
    fi >> a >>b;
    bacnhat(a,b);
}
