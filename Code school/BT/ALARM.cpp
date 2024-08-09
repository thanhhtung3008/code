#include <iostream>
#include <fstream>
using namespace std;
ifstream fi("ALARM.INP");
ofstream fo("ALARM.OUT");
void alarm(int h,int m)
{
    int x,y;
    if (m<45)
    {
        y=m-45+60;
        if (h==0)
            x=h-1+24;
        else
            x=h-1;
    }
    else
    {
        y=m-45;
        if (h==0)
            x=h-1+24;
        else
            x=h;
    }
    fo << x << " " <<y;
}
int main()
{
    int h,m;
    fi >> h >> m;
    alarm(h,m);
}
