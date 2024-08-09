#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;
ifstream fi("PTB2.inp");
ofstream fo("PTB2.out");
void ptb2(double a,double b,double c)
{

        float d=(b*b)-(4*a*c);
        if (d<0)
            fo << "Vo Nghiem.";
        else if (d==0)
            fo << fixed << setprecision(2) << (-b/(2*a));
        else
        {
            fo << fixed << setprecision(2) << ((-b-sqrt(d))/(2*a)) << endl;
            fo << fixed << setprecision(2) << ((-b+sqrt(d))/(2*a)) << endl;
        }
}
int main()
{
    double a,b,c;
    fi >> a >> b >>c;
    ptb2(a,b,c);
}
